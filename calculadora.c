// Escreva um programa calculadora de quatro operações utilizando menu e switch

#include<stdio.h>

int main () {
        int op;
        float num1, num2;
        
        do {
                system("cls");
                printf("********Calculadora********\n\n");
                printf("***********MENU***********\n\n");
                printf("1 - adicao\n");
                printf("2 - subtracao\n");
                printf("3 - multiplicacao\n");
                printf("4 - divisao\n");
                printf("9 - sair do programa\n");
                scanf("%d", &op);
                
                switch (op){
                case 1 :   system("cls");
                        printf("*****Adicao******\n");
                        printf("Digite o primeiro numero\n");
                        scanf("%f", &num1);
                        printf("Digite o segundo numero\n");
                        scanf("%f", &num2);
                        printf("%.1f\n",num1 + num2);
                        system("pause");
                        break;
                        
                case 2 :   system("cls");
                        printf("******Subtracao******\n");
                        printf("Digite o primeiro numero\n");
                        scanf("%f", &num1);
                        printf("Digite o segundo numero\n");
                        scanf("%f", &num2);
                        printf("%.1f\n",num1 - num2);
                        system("pause");
                        break;
                        
                case 3 :   system("cls");
                        printf("******Multiplicacao******\n");
                        printf("Digite o primeiro numero\n");
                        scanf("%f", &num1);
                        printf("Digite o segundo numero\n");
                        scanf("%f", &num2);
                        printf("%.1f\n",num1 * num2);
                        system("pause");
                        break;
                        
                case 4 :   system("cls");
                        printf("******Divisao******\n");
                        printf("Digite o primeiro numero\n");
                        scanf("%f", &num1);
                        printf("Digite o segundo numero\n");
                        scanf("%f", &num2);
                        printf("%.1f\n",num1 / num2);
                        system("pause");
                        break;
                }
        }while (op!= 9);
        
        return 0;
}
