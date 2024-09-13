/*1) Escreva uma função recursiva que calcule a soma dos primeiros n cubos: S = 1³ + 2³ + ... + n³*/

#include <stdio.h>
#include <stdlib.h>


int somaCubos(int n){
    if (n == 1){
        return 1;
    }
    else{
        return (n*n*n)+ somaCubos(n-1); 
    }
}

int main(){
    printf("%d \n",somaCubos(2));
}