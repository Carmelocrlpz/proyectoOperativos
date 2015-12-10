#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>


int procs;
int i;
int j=1;
int pid;
int suma;
int arreglo [1000];

int procesos(int nProc){
	int i;
	for(i=1; i< nProc; i++)
		if(fork()==0)
			return i;

		else
			return 0;

}

int main(){

	int pid;
	pid = procesos(10);
	int elem=0;
	
	for (i = 0; i <= 1000; ++i)
	{
		arreglo[i]=j;
		suma = suma+j;
		//printf("vector%d igual a %d\n",i,j );
		j++;

		elem=elem+1;

		if(elem==100){
			printf("el numero de proceso es %d del vector [%d] La suma de los elementos  = %d\n",getpid(),pid, suma);
			elem=0;
			suma=0;
		}



	}
	
	
	
	


}


//ScanF scanf("%d", & variable);
