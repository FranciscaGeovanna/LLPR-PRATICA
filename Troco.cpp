#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float dinheiro, cafe, troco;
	
	printf ("Programa para calcular quanto o cliente irá perder de troco na compra de um café \n\n");

    printf ("Quantidade de café: ");
    scanf ("%f", &cafe);
    
    printf ("Quantidade de dinheiro colocado: R$ ");
    scanf ("%f", &dinheiro);
    
    troco = dinheiro - (cafe*7);
    
    printf ("Para R$ %.2f colocados, foi perdido R$ %.2f em troco", dinheiro, troco);

	return 0;
}