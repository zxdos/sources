// utility for printing the boot code in hex format for XILINX .coe file

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 16

int buf[400];

int main()
{
	FILE *f = fopen("bootstrap.com", "rb");
	if (!f) return 1;

	fseek(f, 256, 0);

	int sz = fread(&buf, 1, sizeof(buf), f);
	if (sz != 1024) { fclose(f); return 1; }
	sz >>= 2;

	printf("memory_initialization_radix = 16;\n");
	printf("memory_initialization_vector =\n");

	int i=0;
	while(i<sz)
	{
		printf("%08x%s", buf[i], (i+1)<sz?", ":"");
		i=i+1;
		if(!(i&(N-1))) putchar('\xa');
	}

	fclose(f);
	return 0;
}
