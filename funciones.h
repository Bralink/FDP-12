#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>
#include "complex.h"

void menu();
void print_complex(complex a);
void leer_complex(complex *a){
	printf("Ingresa la parte real\n");
	scanf("%f", a->real);
	printf("Ingresa la parte imaginaria\n");
	scanf("%f", a->img);
}
complex suma(complex a, complex b);
complex resta(complex a, complex b);
complex mul(complex a, complex b);
complex conjugado(complex a);
complex div(complex a, complex b);


#endif
