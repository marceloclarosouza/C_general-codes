// Escreva um programa que retorne a quantidade de números divisíveis por x em um
// determinado intervalo (o usuário entra com o número e o intervalo(sempre fechado)).
// Continue o programa anterior retornando a somatória dos números divisíveis por x em um no mesmo intervalo.

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

