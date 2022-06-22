// sintese
//	objetivo " "
//	entrada ""
//	saida " "
#include <stdio.h>

int main (void) {
	float nota1, nota2, nota3, media;
	//mediaponderada
	printf ("Digite nota de portugues: ");
	scanf ("%f", &nota1) ;
	
	printf ("Digite nota de matematica: ");
	scanf ("%f", &nota2) ;
	
	printf ("Digite nota de biologia: ");
	scanf ("%f", &nota3) ;
	
	media = ((2*nota1) + (3*nota2)+ (5*nota3)) / 10;

	printf("Sua media e %f", media);
	
	return 0;
}
