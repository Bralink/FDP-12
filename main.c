#include "funciones.h"

int main(){
	complex a,b;
	complex res;
	int op;

	do{
		menu();
		scanf("%d", &op);
		switch(op){
			case 1:
				leer_complex(&a);
				leer_complex(&b);
				res = suma(a,b);
				break;
			case 2:
				leer_complex(&a);
				leer_complex(&b);
				res = resta(a,b);
				break;
			
			case 3:											leer_complex(&a);
				leer_complex(&b;
				res = mul(a,b);
			case 4:
				leer_complex(&a);
				leer_complex(&b);
				res = div(a,b);
				break;
			case 5:
				leer_complex(&a);
				res = conjugado(a);
				break;
			case 6:
				leer_complex(&a);
				leer_complex(&b);
				printf("Adios\n");
				break;

			print_complex(	
