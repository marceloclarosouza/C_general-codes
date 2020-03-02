// Escreva um programa que leia um número inteiro e verifique se o número está nos seguintes intervalos: a) [10, 60[ b) ]50, 70[ c) ]-7,20] ou ]70,90[ d) [2,9] ou ]65,53] ou 100

#include<stdio.h>

int main() {
        
        int num;
        printf("\nDigite um numero inteiro entre -100 e 100\n");
        scanf("%d", & num);
        
        
        if (num >= 10 && num < 60){
                printf("%d esta entre [10,60]\n", num);
        }
        if (num > 50 && num < 70) {
                printf("%d esta entre ]50, 70[\n", num);
        }
        if ((num  > -7 && num <=20) || (num >70 && num < 90)){
                printf("%d esta entre ]-7,20] ou esta entre ]70,90[\n", num);
        }
        if ((num >2 && num <=9) || (num > 65 && num <= 53) || (num == 100)){
                printf("%d esta entre [2,9] ou ]65,53] = 100\n", num);
        }
        
        return 0;
}
