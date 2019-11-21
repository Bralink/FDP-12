#include "funciones.h"

complex suma(complex a, complex b){
	complex r;
	r.real = a.real + b.real;
	r.img = a.img + b.img;
	return r;
}
complex resta(complex a, complex b){
	complex r;
	r.real = a.real - b.real;
	r.img = a.img - b.img;
	return r;
}
complex mul(complex a, complex b){
	complex r;
	r.real = (a.real * b.real) - (a.img * b.img);
	r.img = (a.img * b.img) + (a.img * b.img);
	return r;
}
complex div(complex a, complex b){
	complex r;
	r.real = (a.real * b.real) + (a.img * b.img)/(b.real * b.real)+(b.img+b.img);
	r.img = (a.img * b.img) - (a.real * b.img)/(b.real * b.real)+(b.img+b.img);
	return r;
}
complex conjugado(complex a){
	complex r;
	r.real = a.real;
	r.img = a.img *(-1);
	return r;
}
void menu(){
	printf("Seleccione una opcion\n");
	printf("1.Suma\n");
	printf("2.Resta\n");
	printf("3.Multiplicacion\n");
	printf("4.Division\n");
	printf("5.Conjugado\n");
}

void print_complex(complex a){
	if(a.img < 0){
		printf("%d - %di", a.real, a.img);
	}else if{
		printf("%d + %di", a.real, a.img);
	}
}
