// sintese
//	objetivo " "
//	entrada ""
//	saida " "
#include <stdio.h>

int main (void) {
	float area, base, altura;
	printf ("Informe a base do triangulo: ");
	scanf ("%f", &base);
	
	printf ("Informe a altura do triangulo: ");
	scanf ("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf ("area do triangulo: %f ", area);
	
	return 0;
	
}
