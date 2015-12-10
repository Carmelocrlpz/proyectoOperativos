#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int arreglo[10]={0,1,2,3,4};
int i,j;
int pares , impares;



int main(){
i=0;
j=0;
pares=impares =0;

switch(fork())
{
	case 1:
	{
		printf("Hubo un problema al crear el proceso\n");
	}
	case 0://Codigo del proceso HIJO
	{
		arreglo[0]=10;
		arreglo[1]=20;
		arreglo[2]=30;
		arreglo[3]=40;
		arreglo[4]=50;
		
	}break;
	default://Codigo del proceso PADRE
	{
		while(j<10)
		{
			if(j% 2==1)
				impares = impares + arreglo[j];
			j++;
		}
			printf("Impares = %d\n",impares);
	}break;

}

}
