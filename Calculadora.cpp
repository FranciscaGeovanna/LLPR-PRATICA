#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, mult, div, adic, subt;
	
	printf("Programa para calcular multiplica��o, divis�o, adi��o e subtra��o \n\n");
	
	printf("Primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("Segundo n�mero: ");
	scanf("%f", &n2);
	
	mult = n1*n2;
	div = n1 / n2;
	adic = n1 + n2;
	subt = n1 - n2;
	
	printf ("\nResultados:\n %.2f \n %.2f \n %.2f \n %.2f \n", mult, div, adic, subt);
	
	return 0;
}
