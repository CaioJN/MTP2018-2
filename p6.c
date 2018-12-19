/*.p6.c*/
/*Caio José Nogueira Machado*/
/*11811EEL003*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	double x,y;
} Ponto;

int main()
{
	int n, i; 
	float a, pi = 3.141592;
   	Ponto *coordenadas;
   	scanf("%d", &n);
	getchar();
   	coordenadas = (Ponto *) malloc(n*sizeof(Ponto)); 
   	for(i=0; i<n; i++)
	   {
   		a = ((i*2.0*pi)/(n-1));
   		coordenadas->x= cos(a);
   		coordenadas->y= sin(a);
   		printf("(%.3f, %.3f) ", coordenadas->x, coordenadas->y);
   	}
	free(coordenadas);
   	return 0;
}	
