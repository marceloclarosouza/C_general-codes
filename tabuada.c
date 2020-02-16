//Escreva um programa para imprimir 4 tabuadas na tela do computador utilizando laços de repetição e otimizando o código

#include <stdio.h>
#include <stdlib.h>

int main() {
        int i;
        int num = 1;
        
        for (i =0; i <= 10; i++){
                printf("%dx%d=%d\t%dx%d=%d\t%dx%d=%d\t%dx%d=%d\t\n\n"
                               , i, num, num*i,i, num+1, (num+1)*i,i, num+2, (num+2)*i,i, num+3, (num+3)*i);
        }
        return 0;
}