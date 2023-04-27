// Feito por: Lerry Henrique Pereira e Nicolas Martins Lorena

#include "matematica.h"
#include <stdlib.h>
#include <stdio.h>

//arquivo .c onde fica as funcoes e procedimentos
float adicao(float num1, float num2){
    return (num1 + num2);
}

float subtracao(float num1, float num2){
    return (num1 - num2);
}

float divisao(float num1, float num2){
    return (num1 / num2);
}

float multiplicacao(float num1, float num2){
    return (num1 * num2);
}

unsigned short int continuar(void){
    char q;
    printf("\n\nDeseja continuar? (S/N)\n");
    scanf(" %c",&q);
    printf("\n\n");
    getchar(); // Limpa o buffer de entrada
    if( q == 's' || q == 'S'){
        return 1;
    } else if( q == 'n' || q == 'N'){
        return 0;
    } else{
        printf("Resposta inválida.\n");
        return 0;
    }
}
