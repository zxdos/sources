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


int OSD_Puts(char *str)
{
	int c;
	while((c=*str++))
		OSD_Putchar(c);
	return(1);
}

/*
void TriggerEffect(int row)
{
	int i,v;
	Menu_Hide();
	for(v=0;v<=16;++v)
	{
		for(i=0;i<4;++i)
			PS2Wait();

		HW_HOST(REG_HOST_SCALERED)=v;
		HW_HOST(REG_HOST_SCALEGREEN)=v;
		HW_HOST(REG_HOST_SCALEBLUE)=v;
	}
	Menu_Show();
}
*/
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

void Select(int row)
{
	
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_SELECT|HOST_CONTROL_DIVERT_KEYBOARD; // Send select
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_KEYBOARD;
}

void Start(int row)
{
	
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_START|HOST_CONTROL_DIVERT_KEYBOARD; // Send start
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_KEYBOARD;
}

void MegaDelay()
{
	
	
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();Delay();
	
}


static struct menu_entry topmenu[]; // Forward declaration.
/*
// RGB scaling submenu
static struct menu_entry rgbmenu[]=
{
	{MENU_ENTRY_SLIDER,"Red",MENU_ACTION(16)},
	{MENU_ENTRY_SLIDER,"Green",MENU_ACTION(16)},
	{MENU_ENTRY_SLIDER,"Blue",MENU_ACTION(16)},
	{MENU_ENTRY_SUBMENU,"Exit",MENU_ACTION(topmenu)},
	{MENU_ENTRY_NULL,0,0}
};


// Test pattern names
static char *testpattern_labels[]=
{
	"Test pattern 1",
	"Test pattern 2",
	"Test pattern 3",
	"Test pattern 4"
};
*/
// Our toplevel menu
static struct menu_entry topmenu[]=
{
	{MENU_ENTRY_CALLBACK,"Reset",MENU_ACTION(&Reset)},
//	{MENU_ENTRY_CYCLE,(char *)testpattern_labels,MENU_ACTION(4)},
//	{MENU_ENTRY_SUBMENU,"RGB Scaling \x10",MENU_ACTION(rgbmenu)},
//	{MENU_ENTRY_TOGGLE,"Scanlines",MENU_ACTION(0)},
//	{MENU_ENTRY_TOGGLE,"PAL / NTSC",MENU_ACTION(1)},
//	{MENU_ENTRY_TOGGLE,"Color",MENU_ACTION(2)},
//	{MENU_ENTRY_TOGGLE,"Difficulty A",MENU_ACTION(3)},
//	{MENU_ENTRY_TOGGLE,"Difficulty B",MENU_ACTION(4)},
	{MENU_ENTRY_TOGGLE,"Double OSD window",MENU_ACTION(5)},
//	{MENU_ENTRY_CALLBACK,"Select",MENU_ACTION(&Select)},
//	{MENU_ENTRY_CALLBACK,"Start",MENU_ACTION(&Start)},
//	{MENU_ENTRY_CALLBACK,"Animate",MENU_ACTION(&TriggerEffect)},
	{MENU_ENTRY_CALLBACK,"Load Tape (.p, .81) \x10",MENU_ACTION(&FileSelector_Show)},
	{MENU_ENTRY_CALLBACK,"Exit",MENU_ACTION(&Menu_Hide)},
	{MENU_ENTRY_NULL,0,0}
};


// An error message
static struct menu_entry loadfailed[]=
{
	{MENU_ENTRY_SUBMENU,"ROM loading failed",MENU_ACTION(loadfailed)},
	{MENU_ENTRY_SUBMENU,"OK",MENU_ACTION(&topmenu)},
	{MENU_ENTRY_NULL,0,0}
};

// An error message
static struct menu_entry tapeloaded[]=
{
	{MENU_ENTRY_SUBMENU,"Tape file Loaded.",MENU_ACTION(tapeloaded)},
	{MENU_ENTRY_SUBMENU,"Type LOAD \"\" + ENTER on ZX81",MENU_ACTION(tapeloaded)},
	{MENU_ENTRY_SUBMENU,"Then press Play and wait",MENU_ACTION(tapeloaded)},
	{MENU_ENTRY_SUBMENU,"There is no image when loading",MENU_ACTION(tapeloaded)},
	{MENU_ENTRY_SUBMENU,"Tape Keys:",MENU_ACTION(tapeloaded)},
	{MENU_ENTRY_SUBMENU,"  - F5: Play/Pause",MENU_ACTION(tapeloaded)},
	{MENU_ENTRY_SUBMENU,"  - F6: Stop the tape",MENU_ACTION(tapeloaded)},
	{MENU_ENTRY_SUBMENU,"  - F7: Eject -(Resets tape)",MENU_ACTION(tapeloaded)},
	{MENU_ENTRY_SUBMENU,"",MENU_ACTION(tapeloaded)},
	{MENU_ENTRY_SUBMENU,"Continue",MENU_ACTION(&topmenu)},
	{MENU_ENTRY_NULL,0,0}
};

static int LoadKeys()
{
	int opened;
	
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_RESET;
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_SDCARD; // Release reset but take control of the SD card
	/* Anulamos para ZX81
	if((opened=FileOpen(&file,"KEYSP1     \0")))
	{
		if(FileRead(&file,sector_buffer))
		{
			
			keys_p1[0] = (int)sector_buffer[0];
			keys_p1[1] = (int)sector_buffer[1];
			keys_p1[2] = (int)sector_buffer[2];
			keys_p1[3] = (int)sector_buffer[3];
			keys_p1[4] = (int)sector_buffer[4];
		}		
	}
	
	if((opened=FileOpen(&file,"KEYSP2     \0")))
	{
		if(FileRead(&file,sector_buffer))
		{
			keys_p2[0] = (int)sector_buffer[0];
			keys_p2[1] = (int)sector_buffer[1];
			keys_p2[2] = (int)sector_buffer[2];
			keys_p2[3] = (int)sector_buffer[3];
			keys_p2[4] = (int)sector_buffer[4];
		}		
	}
	*/
}


static int LoadROM(const char *filename)
{
	int result=0;
	int opened;
	
	//HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_RESET; //Don't reset on load tape in ZX81 core
	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_SDCARD; // Release reset but take control of the SD card
	
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
			return 1;
			
		}

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
	HW_HOST(REG_HOST_ROMSIZE) = file.size;
	
	//Reset(0); //Don't reset on load tape in ZX81 core
	
	if(result)
		Menu_Set(tapeloaded);
	else
		Menu_Set(loadfailed);
	return(result);
}


int main(int argc,char **argv)
{
	int i;
	int dipsw=0;

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
//	MENU_SLIDER_VALUE(&rgbmenu[0])=8;
//	MENU_SLIDER_VALUE(&rgbmenu[1])=8;
//	MENU_SLIDER_VALUE(&rgbmenu[2])=8;

	HW_HOST(REG_HOST_CONTROL)=HOST_CONTROL_DIVERT_SDCARD; // Release reset but take control of the SD card
	OSD_Puts("Initializing SD card\n");

	if(!FindDrive())
		return(0);

//	OSD_Puts("Loading initial ROM...\n");

//	LoadROM("PIC1    RAW");

	LoadKeys();

	FileSelector_SetLoadFunction(LoadROM);
	
	Menu_Set(topmenu);
	Menu_Show();

	while(1)
	{
		struct menu_entry *m;
		int visible;
		HandlePS2RawCodes();
		visible=Menu_Run();

		dipsw=MENU_CYCLE_VALUE(&topmenu[1]);	// Take the value of the TestPattern cycle menu entry.
		if(MENU_TOGGLE_VALUES&1)
			dipsw|=4;	// Add in the scanlines bit.
		if(MENU_TOGGLE_VALUES&2)
			dipsw|=2;	// Add in the PAL bit
		if(MENU_TOGGLE_VALUES&4)
			dipsw|=1;	// Add in the Color bit
		if(MENU_TOGGLE_VALUES&8)
			dipsw|=8;	// Add in the Diff A bit
		if(MENU_TOGGLE_VALUES&16)
			dipsw|=16;	// Add in the Diff B bit
		if(MENU_TOGGLE_VALUES&32)
			dipsw|=32;	// Add in the double OSD window
		HW_HOST(REG_HOST_SW)=dipsw;	// Send the new values to the hardware.
//		HW_HOST(REG_HOST_SCALERED)=MENU_SLIDER_VALUE(&rgbmenu[0]);
//		HW_HOST(REG_HOST_SCALEGREEN)=MENU_SLIDER_VALUE(&rgbmenu[1]);
//		HW_HOST(REG_HOST_SCALEBLUE)=MENU_SLIDER_VALUE(&rgbmenu[2]);

		// If the menu's visible, prevent keystrokes reaching the host core.
		HW_HOST(REG_HOST_CONTROL)=(visible ?
				HOST_CONTROL_DIVERT_KEYBOARD|HOST_CONTROL_DIVERT_SDCARD :
				HOST_CONTROL_DIVERT_SDCARD); // Maintain control of the SD card so the file selector can work.
																 // If the host needs SD card access then we would release the SD
																 // card here, and not attempt to load any further files.
	}
	return(0);
}
