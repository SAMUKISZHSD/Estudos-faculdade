#include <stdio.h>
#include <stdlib.h>

int main() {
	
    printf("Sistema que exibe os resultados das opera��es formatados de acordo com as especifica��es fornecidas\n");
    system ("pause");
    
   
    float valor1, valor2, soma, sub, mult, div;

    printf("Digite um numero: ");
    scanf("%f", &valor1);

    printf("Digite outro numero: ");
    scanf("%f", &valor2);

    soma = valor1 + valor2;
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    div = valor1 / valor2;
    

    printf("O valor da soma de %.2f + %.2f = %.2f\n", valor1, valor2, soma);
     printf("O valor da subtra��o de %.2f + %.2f = %.2f\n", valor1, valor2, sub);
      printf("O valor da multiplica��o de %.2f + %.2f = %.2f\n", valor1, valor2, mult);
       printf("O valor da divis�o de %.2f + %.2f = %.2f\n", valor1, valor2, div);




    return 0;
}
