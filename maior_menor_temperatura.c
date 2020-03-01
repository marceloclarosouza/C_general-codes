// Escreva um programa que leia n temperaturas e retorne:
//a) Maior temperatura
//b) Menor temperatura
//c) Média das temperaturas

#include<stdio.h>

int main (){
        
        char op = 'S';
        int i = 0, num, maior = 0, menor = 1000;
        float soma = 0, media, total;
        
        system("cls");
        while (op != 'N'){
                printf("Digite uma temperatura\n");
                scanf("%d", &num);
                if (num > maior){
                        maior = num;
                }
                if (num < menor){
                        menor = num;
                }
                
                soma += num;
                i++;
                
                printf("Deseja continuar? S ou N\n");
                fflush(stdin);
                scanf("%c", &op);
        }
        total = i;
        media = soma/total;
        printf("Maior = %d\n", maior);
        printf("Menor = %d\n", menor);
        printf("Media = %.1f\n", media);
        
        return 0;
}
