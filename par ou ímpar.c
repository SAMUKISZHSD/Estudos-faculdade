#include <stdio.h>


int main() {
	
	//Neste programa, o usu�rio � solicitado a inserir um n�mero. 
	//Em seguida, o programa verifica se o n�mero � par ou �mpar usando o operador de m�dulo (%). 
	
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � par ou �mpar
    if (numero % 2 == 0) {
        printf("O numero %d eh par.\n", numero);
    } else {
        printf("O numero %d eh impar.\n", numero);
    }

    return 0;
}

