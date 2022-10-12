#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int min, multiplicacao;
	
	printf ("Programa para mostrar quantos segundos existem")
	
	printf("Minutos: ");
	scanf ("%d", &min);
	
	multiplicacao = 60*min;
	
	printf ("Existem %d segundos em %d minutos", multiplicacao, min);
	
	return 0;
}
