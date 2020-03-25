/*Escreva uma função que receba o A, B e C de uma função de segundo grau e retorne o
delta, o X1 e o X2. (utilize retorno vazio e passe os dados por referência)*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void raizes (float a, float b, float c)
{
    float delta, x1, x2;

    delta = (b*b) -4*a*c;

    if (delta <0)
        printf("Delta negativo.\nEsta equacao nao possui raizes reais\n")
    else if (delta == 0)
    {
        x = -b/(2*a);
    }
    else
    {
        x1 = ((-b) + sqrt(delta(a,b,c))/2*a);
        x2 = ((-b) - sqrt(delta(a,b,c)/2*a));
    }
}