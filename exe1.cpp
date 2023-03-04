#include <stdio.h>
#include <stdlib.h>

/*
Exercícios de Ponteiros
Crie um programa que contenha um vetor de
inteiros com tamanho 5. Preencha o vetor,
usando o ponteiro (faça o ponteiro percorrer o
vetor), com o usuário passando os dados para
armazenar no conteúdo deste ponteiro(ou seja
no vetor) e após isso, imprima o dobro de cada
valor do vetor. Depois imprima o endereço de
cada casa do vetor. Utilizar apenas ponteiros.
*/
#define SIZE 5

int main() {
    int vector[SIZE];
    int *ptr = vector;

    // Preenche o vetor com dados fornecidos pelo usuário
    printf("Digite %d números para preencher o vetor:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", ptr);
        ptr++;
    }

    // Imprime o dobro de cada valor do vetor
    ptr = vector;  // reinicia o ponteiro para o início do vetor
    printf("\nDobro de cada valor do vetor:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", (*ptr) * 2);
        ptr++;
    }

    // Imprime o endereço de cada casa do vetor
    ptr = vector;  // reinicia o ponteiro para o início do vetor
    printf("\n\nEndereço de cada casa do vetor:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%p ", (void *)ptr);
        ptr++;
    }

    printf("\n");
    return 0;
}
