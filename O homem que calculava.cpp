#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");

	int a, b, c, f1, f2, f3, f4;
	
	printf("Programa para receber valores e efetuar c�lculos \n\n");
	
	printf("Primeira vari�vel: ");
	scanf("%d", &a);
	
	printf("Segunda vari�vel: ");
	scanf("%d", &b);
	
	printf("Terceira vari�vel: ");
	scanf("%d", &c);
	
	f1 = (a*b)/c;
	f2 = (a*a) + b + 5*c;
	f3 = a*b*c + b + c / 3 * 5 - 1;
	f4 = (a*b*c)*(a*b*c)*(a*b*c)/2;
	
	printf("\nResultados:\n %d \n %d \n %d \n %d \n", f1, f2, f3, f4);

	return 0;
}
