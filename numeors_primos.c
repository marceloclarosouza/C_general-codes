//Escreva um programa para verificar se um número é primo
#include<stdio.h>

int main () {
        
        int i, num, j =0;
        
        printf("Digite um numero inteiro\n");
        scanf("%d", &num);
        
        for (i = 1; i <= num; i++){
                if (num % i == 0){
                        j++;
                }
        }
        
        if (j == 2){
                printf("%d e um numero primo", num);
        }
        else {
                printf("%d nao e um numero primo", num);
        }
        
        return 0;
}
