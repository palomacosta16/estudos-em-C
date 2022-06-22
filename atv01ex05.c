// sintese
//	objetivo " receber o valor total de uma compra "
//	entrada "valor"
//	saida " valor do troco"
#include <stdio.h>

int main (void) {
	float valor, troco, reais;
	printf ("Digite o valor da compra ");
	scanf ("%f", &valor);
	
	printf ("Digite quantos reais ");
	scanf ("%f", &reais);

	troco = valor - reais;
	
	printf ("Seu troco e %f", troco);
	

	return 0;
	
}
