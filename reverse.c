#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
rev(char *c, int k)
{
	int i;
	for(i=k;i>-1;i--)
	{
		printf("%c",c[i]);
	}
	printf("\n");
}

int
main(int argc,char *argv[])
{
	int i;
	for(i=1;i<argc;i++)
	{
		rev(argv[i],strlen(argv[i]));
	}
}
