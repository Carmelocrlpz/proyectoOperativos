#include <stdio.h>

main()
{
	char nombre[20];
	int tamaño;

	printf( "Introduzca Cualquier Texto" );
	scanf( "%s", nombre );
	printf( "\nEl nombre que ha escrito es: %s\n", nombre );
	tamaño= strlen(nombre);

	printf("la cadena %s tiene %i caracteres. \n", tamaño);

}
