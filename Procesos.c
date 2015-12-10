#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){


switch(fork())
{
	case 1:
	{
		printf("Hubo un problema al crear el proceso\n");
	}
	case 0:
	{
		while(1)
			printf("NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO XD\n");
	}
	default:
	{
		while(1)
			printf("Yo soy tu padre B...\n");
	}

}

}
