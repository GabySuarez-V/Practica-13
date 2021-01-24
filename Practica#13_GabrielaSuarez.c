/*Practica#13              Suarez Velasco Gabriela 
Fecha de entrega: 23/01/2021*/
//Librerias
#include <stdio.h>
//variables
int main(int argc, char **argv) 
{
FILE *archEntrada, *archivoSalida;
unsigned char buffer[2048]; 
int bytesLeidos, cont;
// Proceso
	if(argc < 3) 
{
	printf("Ejectuar el programa de la siguiente manera:\n");
	printf("\tnombre_programa \tarchivo_origen \tarchivo_destino\n");
	printf("Nombre:\n Edad:\n Carrera:\n Semestre:\n Videojuego Favorito");
	while (cont>=5);
	return 1;
}
	archEntrada = fopen(argv[1], "rb");
	if(!archEntrada) 
{
	printf("El archivo %s no existe o no se puede abrir", argv[1]);
	return 1;
}
	archivoSalida = fopen(argv[2], "wb");
	if(!archivoSalida) 
	
{
	printf("El archivo %s no puede ser creado", argv[2]);
	return 1;
}
	while (bytesLeidos = fread(buffer, 1, 2048, archEntrada))
	fwrite(buffer, 1, bytesLeidos, archivoSalida);
	fclose(archEntrada);
	fclose(archivoSalida);
return 0;
}
