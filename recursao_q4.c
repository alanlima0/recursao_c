/*Crie uma função recursiva que receba um número inteiro N e imprima todos os 
números naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int imprimir(int n){
    if (n<0){
        return 1;
    }
    printf("%d \n",n);
    imprimir(n-1);
}

int main(){
    imprimir(5);
}
