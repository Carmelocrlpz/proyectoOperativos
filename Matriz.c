#include <stdio.h>


int matriz[3][3];
int *apuntador[3];
int **ptr;
int j;
int main () 
{

	matriz[0][0] = 1;
	matriz[0][1] = 20; // Queremos imprimir este
	matriz[0][2] = 3;
	matriz[1][0] = 4;
	matriz[1][1] = 15;
	matriz[1][2] = 6;
	matriz[2][0] = 7;
	matriz[2][1] = 8;
	matriz[2][2] = 9;

	apuntador[0]= matriz [0];
	apuntador[1]= matriz [1];
	apuntador[2]= matriz [2];
	
	ptr = apuntador;

	
       	//apuntador = matriz[1];
 		//ptr= &apuntador;
		//((ptr+1)) = &matriz[][]
	 printf("%d\n",matriz[1][1]);

	 printf("%d\n",*(*(matriz+1)+1));
	 
	 printf("%d\n",*(*(ptr+0)+1));
	 printf("%d\n",*(*(ptr+0)+1));

}

int copiar (int *matriz)
{

	for (j = 0; j < sizeof(matriz); j++) 
    printf ("%4d", vector[j] = matriz[j]);

}
