#include<stdio.h>

int main(){
    int SOMA = 0;
    int K = 0;
    int INDICE = 13;

    while(K < INDICE){
        K += 1;
        SOMA += K;
    }

    printf("%d ", SOMA);
}