#include "host.h"

#include "osd.h"
#include "keyboard.h"
#include "menu.h"
#include "ps2.h"
#include "minfat.h"
#include "spi.h"
#include "fileselector.h"

fileTYPE file;

extern int keys_p1[];
extern int keys_p2[];
extern int joy_pins;  //(SACUDLRB) => SACBRLDU
extern int currentrow;
int dipsw; //traspaso de opciones a core.
// bit 0-1 - Clock speed: 0 - 1x, 1 - 2x, 2 - 4x, 3 - 8x
// bit 2 - Sound on/off
// bit 
int vdcload=0; //carga de charset de VDC activada

//static struct menu_entry topmenu[]; // Forward declaration.
static struct menu_entry KeyboardHelp[]; // Forward declaration.
static struct menu_entry CoreCredits[]; // Forward declaration.

struct menu_entry *topmenu;


int OSD_Puts(char *str)
{
	int c;
	while((c=*str++))
		OSD_Putchar(c);
	return(1);
}

void Delay()
{
	int c=16384; // delay some cycles
	while(c)
	{
		c--;
	}
}
void Reset(int row)
{
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_RESET|HOST_CONTROL_DIVERT_KEYBOARD; // Reset host core
	Delay();
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_KEYBOARD;
}

void MegaDelay()
{	int i=1;
	for (i=1;i<=576;i++)
	{
		Delay();
	}
}

void ResetLoader()
{
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_LOADER_RESET;
	MegaDelay();
}

void NoSelection(int row)
{
}

void Core_Credits(int row)
{
	CoreCredits[12].action=MENU_ACTION(Menu_Get()); // Set parent menu entry
	Menu_Set(CoreCredits);
}

void Keyboard_Help(int row)
{
	KeyboardHelp[12].action=MENU_ACTION(Menu_Get()); // Set parent menu entry
	Menu_Set(KeyboardHelp);
}

void Select(int row)
{

	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_SELECT|HOST_CONTROL_DIVERT_KEYBOARD; // Send select
	MegaDelay();
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_KEYBOARD;
}

void Start(int row)
{

	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_START|HOST_CONTROL_DIVERT_KEYBOARD; // Send start
	MegaDelay();
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_KEYBOARD;
}


// Clock speed submenu
// ZXUNO board type
static char *clockspeed[]=
{
	"Clock Speed: 1x",
	"Clock Speed: 2x",
	"Clock Speed: 3x",
	"Clock Speed: 4x"
};



// Our toplevel menu for ZX2
static struct menu_entry topmenu2[]=
{
	{MENU_ENTRY_CALLBACK,"=== CHIP-8 for ZXDOS ===",MENU_ACTION(&Core_Credits)},
	{MENU_ENTRY_CALLBACK,"========================",MENU_ACTION(&Core_Credits)},
	{MENU_ENTRY_CALLBACK,"Reset",MENU_ACTION(&Reset)},
	{MENU_ENTRY_CYCLE,(char *)clockspeed,MENU_ACTION(4)},
	{MENU_ENTRY_CALLBACK,"Load Rom (.bin, .ch8) \x10",MENU_ACTION(&FileSelector_Show)},
	{MENU_ENTRY_TOGGLE,"Sound on/off",MENU_ACTION(0)},
	{MENU_ENTRY_CALLBACK,"Keyboard Help",MENU_ACTION(&Keyboard_Help)},
	{MENU_ENTRY_CALLBACK,"Exit",MENU_ACTION(&Menu_Hide)},
	{MENU_ENTRY_NULL,0,0}
};

// Our toplevel menu for ZX1
static struct menu_entry topmenu1[]=
{
	{MENU_ENTRY_CALLBACK,"=== CHIP-8 for ZXUNO ===",MENU_ACTION(&Core_Credits)},
	{MENU_ENTRY_CALLBACK,"========================",MENU_ACTION(&Core_Credits)},
	{MENU_ENTRY_CALLBACK,"Reset",MENU_ACTION(&Reset)},
	{MENU_ENTRY_CYCLE,(char *)clockspeed,MENU_ACTION(4)},
	{MENU_ENTRY_CALLBACK,"Load Rom (.bin, .ch8) \x10",MENU_ACTION(&FileSelector_Show)},
	{MENU_ENTRY_TOGGLE,"Sound on/off",MENU_ACTION(0)},
	{MENU_ENTRY_CALLBACK,"Keyboard Help",MENU_ACTION(&Keyboard_Help)},
	{MENU_ENTRY_CALLBACK,"Exit",MENU_ACTION(&Menu_Hide)},
	{MENU_ENTRY_NULL,0,0}
};

// Keyboard Help
static struct menu_entry KeyboardHelp[]=
{
	/*
	The Chip-8 machine has a hex keypad for input. This has been mapped to the PC keyboard as follows:
	Chip-8:   PS/2:
	1 2 3 C   1 2 3 4
	4 5 6 D   Q W E R
	7 8 9 E   A S D F
	A 0 B F   Z X C V
	*/

	{MENU_ENTRY_CALLBACK,"=== CHIP-8 Keyboard HELP ===",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"============================",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"Chip-8 has a hex keypad.",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"The mapping to PC keyboard" ,MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"is following.",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"  Chip-8:       PS/2:",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"  1 2 3 C       1 2 3 4",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"  4 5 6 D       Q W E R",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"  7 8 9 E       A S D F",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"  A 0 B F       Z X C V",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_SUBMENU,"OK",MENU_ACTION(&topmenu)},
	{MENU_ENTRY_NULL,0,0}
};

// Core Credits
static struct menu_entry CoreCredits[]=
{
	{MENU_ENTRY_CALLBACK,"=== CHIP-8 Core Credits ===",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"============================",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"Chip-8 core for ZXUNO, AEON,",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"ZXDOS and ZXDOS+ boards." ,MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"Original core by:",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK," - Carsten Elton Sorensen ",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"Port made by:",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK," - Azesmbog",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK," - AvlixA",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_CALLBACK,"",MENU_ACTION(&NoSelection)},
	{MENU_ENTRY_SUBMENU,"OK",MENU_ACTION(&topmenu)},
	{MENU_ENTRY_NULL,0,0}
};

// An error message
static struct menu_entry loadfailed[]=
{
	{MENU_ENTRY_SUBMENU,"ROM loading failed",MENU_ACTION(loadfailed)},
	{MENU_ENTRY_SUBMENU,"OK",MENU_ACTION(&topmenu)},
	{MENU_ENTRY_NULL,0,0}
};

static int LoadKeys()
{
	int opened;

	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_RESET;
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_SDCARD; // Release reset but take control of the SD card
}


static int LoadROM(const char *filename, const char *extension)
{
	int result=0;
	int opened;
	//HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_RESET;

  //HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_LOADER_RESET;
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_SDCARD; // Release reset but take control of the SD card

	dipsw=((dipsw|256)^256); //load ROM
	HW_HOST(REG_HOST_SW)=dipsw;	// Send the new values to the hardware.
	Delay();

	if((opened=FileOpen(&file,filename)))
	{
		int filesize=file.size;
		unsigned int c=0;
		int bits;

		if (filesize == 5)
		{

			OSD_Puts(filename);
			MegaDelay();
			MegaDelay();
			MegaDelay();
			MegaDelay();
			MegaDelay();
			MegaDelay();
			Menu_Set(topmenu);
			// if(joy_pins & 0x100) //(ZXUNO/ZXDOS)(SACUDLRB) => (ZXUNO/ZXDOS)SACBRLDU
			// 	Menu_Set(topmenu1); //ZXUNO menu
			// else
			// 	Menu_Set(topmenu); //ZXDOS menu
			return 1;

		}

		HW_HOST(REG_HOST_ROMSIZE) = file.size;
		HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_LOADER_RESET|HOST_CONTROL_RESET|HOST_CONTROL_DIVERT_SDCARD;
		MegaDelay();
		HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_SDCARD; // Release reset but take control of the SD card

		bits=0;
		c=filesize-1;
		while(c)
		{
			++bits;
			c>>=1;
		}
		bits-=9;

		result=1;

		while(filesize>0)
		{
			OSD_ProgressBar(c,bits);
			if(FileRead(&file,sector_buffer))
			{
				int i;
				int *p=(int *)&sector_buffer;
				for(i=0;i<512;i+=4)
				//unsigned char *p=&sector_buffer;
				//for(i=0;i<512;i+=1)
				{
					unsigned int t=*p++;
					HW_HOST(REG_HOST_BOOTDATA)=t;
				}
			}
			else
			{
				result=0;
				filesize=512;
			}
			FileNextSector(&file);
			filesize-=512;
			++c;
		}
	}

    vdcload=0;
	dipsw=((dipsw|256)^256); //load ROM
    HW_HOST(REG_HOST_SW)=dipsw;	// Send the new values to the hardware.

	if(result) {
	//	OSD_Show(0);
		Menu_Set(topmenu);
    	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_RESET;
		MegaDelay();
		HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_KEYBOARD; //Release control reset
		// if(joy_pins & 0x100)
		// 	Menu_Set(topmenu1); //ZXUNO menu
		// else
		// 	Menu_Set(topmenu); //ZXDOS menu
	}
	else
		Menu_Set(loadfailed);
	return(result);
}


int main(int argc,char **argv)
{
	int i;
	//int dipsw=0;
	dipsw=4; //traspaso de opciones a core. Default: soud on
	// bit 0-1 - Clock speed: 0 - 1x, 1 - 2x, 2 - 4x, 3 - 8x
	// bit 2 - Sound on/off
	// bit 
	
	// Put the host core in reset while we initialise...
//	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_RESET;
	Reset(0);

	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_SDCARD;

	PS2Init();
	EnableInterrupts();

	OSD_Clear();
	for(i=0;i<4;++i)
	{
		PS2Wait();	// Wait for an interrupt - most likely VBlank, but could be PS/2 keyboard
		OSD_Show(1);	// Call this over a few frames to let the OSD figure out where to place the window.
	}

	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_SDCARD; // Release reset but take control of the SD card
	OSD_Puts("Initializing SD card\n");

	if(!FindDrive())
		return(0);

//	OSD_Puts("Loading initial ROM...\n");

//	LoadROM("PIC1    RAW");

	LoadKeys();

	FileSelector_SetLoadFunction(LoadROM);


// Valores iniciales menu
	MENU_TOGGLE_VALUES = (dipsw>>2);
	HW_HOST(REG_HOST_SW)=dipsw;

	if(joy_pins & 0x100)
		topmenu = topmenu1; //ZXUNO menu
	else
		topmenu = topmenu2; //ZXDOS menu
	
	Menu_Set(topmenu); //ZXUNO/ZXDOS menu

	currentrow=4; //Load ROM as default option
	Menu_Show();

	//OSD_Show(0);	// Hide OSD menu
	//Menu_Hide();

	while(1)
	{
		struct menu_entry *m;
		int visible;
		HandlePS2RawCodes();
		visible=Menu_Run();

		dipsw=MENU_CYCLE_VALUE(&topmenu[3]);	// (2bit: 0:1)Take the value of the Clock speed selector
		if(MENU_TOGGLE_VALUES&1)
			dipsw|=4;	// bit 2 - Sound on/off

		/*if(joy_pins & 0x100) { //ZXUNO
			dipsw=(MENU_CYCLE_VALUE(&topmenu1[8])<<4);	// (1bit: 4)Take the value of NTSC/PAL mode
			dipsw|=(MENU_CYCLE_VALUE(&topmenu1[9])<<5);	// (2bit: 5:6)Take the value of the color mode
			dipsw|=(MENU_CYCLE_VALUE(&topmenu1[10])<<2);	// (2bit: 2:3)Take the value of the board model
	  }
		else { //ZXDOS
			dipsw=(MENU_CYCLE_VALUE(&topmenu[8])<<4);	// (1bit: 4)Take the value of NTSC/PAL mode
			dipsw|=(MENU_CYCLE_VALUE(&topmenu[9])<<5);	// (2bit: 5:6)Take the value of the color mode
			dipsw|=(MENU_CYCLE_VALUE(&topmenu[10])<<9);	// (1bit: 9)Take the value of the voice mode
			//dipsw|=(MENU_CYCLE_VALUE(&topmenu1[6])<<2);	// (2bit: 2:3)Take the value of the board model
		}*/

	  	/*
		if(MENU_TOGGLE_VALUES&1)
			dipsw|=4;	// bit 2 - Sound on/off
		if(MENU_TOGGLE_VALUES&2)
	  		dipsw|=2;	// Add in the swap joystick option
		if(MENU_TOGGLE_VALUES&4)
			dipsw|=128;	// Add in the join joystick option
		//if(MENU_TOGGLE_VALUES&8)
		//	dipsw|=8;	// Add in the Diff A bit
		//if(MENU_TOGGLE_VALUES&16)
		//	dipsw|=16;	// Add in the Diff B bit
		//if(MENU_TOGGLE_VALUES&32)
		//	dipsw|=32;	// Add in the double OSD window
		*/
		HW_HOST(REG_HOST_SW)=dipsw;	// Send the new values to the hardware.

		// If the menu's visible, prevent keystrokes reaching the host core.
		HW_HOST(REG_HOST_CONTROL)=(visible ?
				HOST_CONTROL_DIVERT_KEYBOARD|HOST_CONTROL_DIVERT_SDCARD :
				HOST_CONTROL_DIVERT_SDCARD); // Maintain control of the SD card so the file selector can work.
																 // If the host needs SD card access then we would release the SD
																 // card here, and not attempt to load any further files.
	}
	return(0);
}
