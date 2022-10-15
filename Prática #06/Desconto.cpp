#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, 	"Portuguese_Brazil");
	
	int idadep1, p2;
	
	printf ("Digite sua idade: ");
	scanf("%d", &idadep1);
	
	printf ("Digite sua idade: ");
	scanf("%d", &p2);
	
	if ((idadep1 %2 != 0) ^ (p2 %2 != 0 )) {
		
		printf ("\n Desconto");
	}
	
	return 0;
}
