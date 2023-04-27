// Feito por: Lerry Henrique Pereira e Nicolas Martins Lorena

#include <stdio.h>
#include "matematica.h"
//funcao main onde existe o switch case com a chamada das funcoes
int main() {
    do {
        char op;
        float num1, num2;
        printf("Digite a operacao desejada (+, -, *, /): ");
        scanf(" %c",&op);
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch(op) {
            case '+':
                printf("%.2f + %.2f = %.2f", num1, num2,adicao(num1,num2));
                break;

            case '-':
                printf("%.2f - %.2f = %.2f", num1, num2,subtracao(num1,num2));
                break;

            case '*':
                printf("%.2f * %.2f = %.2f", num1, num2,multiplicacao(num1,num2));
                break;

            case '/':
                if (num2 == 0) {
                    printf("Nao e possível dividir por zero!");
                } else {
                    printf("%.2f / %.2f = %.2f", num1, num2,divisao(num1,num2));
                }
                break;

            default:
                printf("Operação invalida!");
        }

        // Verifica se o usuário deseja continuar
        if (continuar() == 0) {
            break;
        }
    } while(1);

    return 0;
}
