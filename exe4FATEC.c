/*Escreva uma função que receba o A, B e C de uma função de segundo grau e retorne o
delta, o X1 e o X2. (utilize retorno vazio e passe os dados por referência)*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void *Delta (float a, float b, float c, float *delt)
{
    *delt = (b*b) - 4*a*c;
}

void raizes (float a, float b, float c, float *x1, float *x2)
{
    float delta;

    delta = (b*b) -4*a*c;

    if (delta == 0)
    {
        *x1 = -b/(2*a);
        *x2 = -b/(2*a);
    }
    else if (delta > 0)
    {
        *x1 = ((-b) + sqrt(delta))/(2*a);
        *x2 = ((-b) - sqrt(delta))/(2*a);
    }
    else
    {
        printf("Esta equacao nao possui raizes reais\n");
    }
}

int main ()
{
    float a, b, c, delt, x1, x2;
    system("cls");
    printf("Digite o valor de 'a'\n");
    scanf("%f", &a);
    printf("Digite o valor de 'b'\n");
    scanf("%f", &b);
    printf("Digite o valor de 'c'\n");
    scanf("%f", &c);

    Delta(a,b,c,&delt);
    printf("Delta = %.1f\n", delt);

    raizes(a,b,c,&x1,&x2);
    printf("Os valores de x1 = %.1f e x2 = %.1f\n", x1, x2);
    system("pause");
    return 0;
}