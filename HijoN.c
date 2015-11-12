#include<stdio.h>


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
  
  int arreglo[1000];
  int i,pid,nProc,suma;
  int inicio, fin;
    printf(" Ingrese el  No proceso ");
    scanf("%d",&nProc);
      pid = procesos(nProc);

      for (i = 0; i < 1000; i++)
  
    arreglo[i] = i + 1;

  
   inicio = (pid - 1 ) * (1000/nProc);
  fin = inicio + (1000/nProc);
  if (pid > 0)
  {
    for(i = inicio; i < fin; i++)
      suma += arreglo[i];
    printf("soy el hijo %d con PID %d y mi suma es %d\n",pid,getpid(),suma);
  }
} 
      