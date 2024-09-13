/*Crie uma função recursiva que retorne a média dos elementos de um vetor de 
inteiros*/

#include <stdio.h>
#include <stdlib.h>


int soma(int *vetor, int tamanho) {
    if (tamanho == 0) {
        return 0; 
    }
    return vetor[tamanho - 1] + soma(vetor, tamanho - 1);  
}

float media(int *vetor, int tamanho) {
    if (tamanho == 0) {
        return 0; 
    }
    int total = soma(vetor, tamanho);
    return (float)total / tamanho;  
}

int main() {
    int vetor[] = {5, 10, 15, 20, 25};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);  

    printf("A média dos elementos é: %.2f\n", media(vetor, tamanho));

    return 0;
}
