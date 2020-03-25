/*Escreva uma função que receba o A, B e C de uma função de segundo grau e retorne o
delta, o X1 e o X2. (utilize retorno vazio e passe os dados por referência)*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void *Delta (float a, float b, float c, float *delt)
{
    float delt;
    *delt = (b*b) - 4*a*c;
}

void raizes (float a, float b, float c)
{
    float delta, x1, x2;

    delta = (b*b) -4*a*c;

    if (delta == 0)
    {
        x1 = -b/(2*a);
        x2 = -b/(2*a);
    }
    else if (delta > 0)
    {
        x1 = ((-b) + sqrt(delta(a,b,c))/2*a);
        x2 = ((-b) - sqrt(delta(a,b,c))/2*a);
    }
}

int main ()
{
    float a, b, c, raiz, delt;
    system("cls");
    printf("Digite o valor de 'a'\n");
    scanf("%f", &a);
    printf("Digite o valor de 'b'\n");
    scanf("%f", &b);
    printf("Digite o valor de 'c'\n");
    scanf("%f", &c);

    Delta(a,b,c,&delt);
    printf("Delta = %.1f", delt);

    //raiz = &raizes(a,b,c);
    //printf("Os valores de x1 e x2 sao %f", raiz);
    system("pause");
    return 0;
}