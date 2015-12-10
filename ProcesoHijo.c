#include<stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <wait.h>


int procesos(int nProc)
{
  int i;
  for(i=1; i <= nProc; i++)
    if(fork()==0)
      return i;
       return 0;


}

int main()
{
  int status;
  int pid;
  int nProc;
  int i;

    printf(" Ingrese el  Numero de proceso ");
    scanf("%d",&nProc);

  pid = procesos(nProc);

  if(pid>0){
  	printf("Soy el Proceso Hijo %d \n",pid);


  }else{
  	for(i=1; i<=nProc; i++)
  	wait(&status);
  		printf("Soy el Proceso Padre %d \n",pid);
  	}
}
