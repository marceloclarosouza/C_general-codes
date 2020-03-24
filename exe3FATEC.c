/*
Escreva uma função que receba duas variáveis do tipo inteiro e retorne as variáveis
trocadas
*/

int troca (int *a, int *b)
{
    int temp;
    temp = *a; *a = *b; *b = temp;
}

int main ()
{
    int a, b, res;

    printf("Digite o valor de 'a'\n");
    scanf("%d", &a);
    printf("Digite o valor de 'b'\n");
    scanf("%d", &b);

    troca(&a, &b);
    printf("Valores trocados %d %d", a,b);

    return 0;

}