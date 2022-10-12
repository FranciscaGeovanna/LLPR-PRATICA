#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float b, h, calculo;
	
	printf ("Programa para calcular a área de um triângulo\n\n");
	
	printf ("Base: ");
	scanf ("%f", &b);
	
	printf ("Altura: ");
	scanf ("%f", &h);
	
	calculo = (b*h)/2;
	
	printf ("\nA área do triângulo de base %.2f e altura %.2f é: %.2f", b, h, calculo);

	return 0;
}