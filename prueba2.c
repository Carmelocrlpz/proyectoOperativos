#include<stdio.h>

char *meses[]={"enero","frebrero","marzo","abril"};
int i,j;
char *aux;

void main()
{
	/* code */
	for (i = 0; i < 4; i++)
	{
		j=0;
		
		while(meses[i][j] != '\0') //Enero = /0
		{
			j++;
		}
		printf("%c\n",+(meses+j-3) );
		printf("%c\n",+(meses+j-2) );
		printf("%c\n",+(meses+j-1) );
		printf("\n" );
	}
	
}
