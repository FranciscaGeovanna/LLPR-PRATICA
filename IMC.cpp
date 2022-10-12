#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");

    float massa, altura, divisao;
    
    printf("Programa para calcular IMC \n\n");
    
    printf("Massa: ");
    scanf("%f", &massa);
    
    printf("Altura: ");
    scanf("%f", &altura);
    
    divisao = massa/(altura*altura);
    
    printf("\nO resultado do cálculo do IMC é de aproximadamente: %.2f", divisao);
    
    return 0;
}