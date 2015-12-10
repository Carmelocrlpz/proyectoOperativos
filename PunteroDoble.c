#include <stdio.h>

int i;
int **ptr;
int *puntero;
int vector[]={1,2,3,4,5};
int matriz[10][5];

int main()
{
	i=1;
	//puntero =&1;
	puntero = vector;
	printf("%d\n",*puntero);
	printf("%d\n",*(puntero+4));
}
