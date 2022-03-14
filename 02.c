#include<stdio.h>


int main(){

    int num;
    int x = 0;
    int y = 1;
    int z;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Nao Pertence a sequencia de Fibonacci");
        return(0);
    } else if (num == 0){
        printf("Pertence a sequencia de Fibonacci");
        return 0;
    }

   do {
       z = x + y;
       x = y;
       y = z;
   } while(x < num);

   if (x == num){
       printf("Pertence a sequencia de Fibonacci");
       return 0;
   } else {
       printf("Nao Pertence a sequencia de Fibonacci");
       return 0;
   }
    
}