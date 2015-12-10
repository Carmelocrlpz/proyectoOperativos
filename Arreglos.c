#include<stdio.h>

int arreglo[5];
int i;
int *ptr;
int *ap;
int *aux;



int imprimir(int *arreglo,int tam){
	int i=0;
	for(i=0;i<tam;i++)
	printf("arreglo[%d]=%d\n",i, *(arreglo+i) );
}

int burbuja(int *arreglo, int tam){
	int i=0;
	int j=0;

	for(i = 1; i <tam; i++){
		for (j = 0; j = tam; j++ ){
			if(*ap> *(ap+1)){
				tam = *ap;
				*ap = *(ap +1);
				*(ap+1) = tam;
		}
		
	  }
	}
		
		
}

int main()
{
	int arreglo[5];
	arreglo[0]=1;
	arreglo[1]=2;
	arreglo[2]=3;
	arreglo[3]=4;
	arreglo[4]=5;
	arreglo[5]=6;
	arreglo[6]=7;
	arreglo[7]=8;
	arreglo[8]=9;
	arreglo[9]=10;

	

	burbuja(arreglo,10);
	imprimir(arreglo,10);
	
}
