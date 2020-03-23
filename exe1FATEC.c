/*
Escreva uma função que receba dois números reais e um caractere (operação) e retorne
a operação aritmética entre os dois números enviados de acordo com o caractere
recebido (caracteres válidos: + - * /)
*/

# include <stdio.h>

float calcular (float n1, float n2, char op)
{
    float res;

    if (op == '+')
        res = n1 + n2;

    else if (op == '-')
        res = n1 - n2;

    else if (op == '*')
        res = n1 * n2;

    else if (op == '/')
        res = n1 / n2;


    return res;
}


int main ()
{
    float n1, n2, res;
    char op;

    printf("Digite um numero\n");
    scanf("%f", &n1);
    printf("Digite um numero diferente de zero\n");
    scanf("%f", &n2);
    if (n2 == 0){
        printf("Este número deve ser diferente de zero!\n");
        printf("Digite um numero diferente de zero\n");
        scanf("%f", &n2);
    }

    printf("Escolha a operacao desejada: +, -, *, /\n");
    scanf(" %c", &op);

    res = calcular(n1, n2, op);

    printf("%.1f %c %.1f = %.1f\n", n1, op, n2, res);
    system ("pause");

    return 0;
}