/*
Escreva uma função que receba o A, B e C de uma função de segundo grau e retorne o
delta.
*/

float delta (float n1, float n2, float n3)
{
    float delta;
    delta = (n2*n2) -4*n1*n3;
    return delta;
}

int main ()
{
    float n1, n2, n3, res;
    printf("Digite o valor de 'a'\n");
    scanf("%f", &n1);
    printf("Digite o valor de 'b'\n");
    scanf("%f", &n2);
    printf("Digite o valor de 'c'\n");
    scanf("%f", &n3);

    res = delta(n1, n2, n3);
    
    if (res >= 0)
        printf("Delta = %.1f\n", res);
    else
        printf("Nao existe delta com valor negativo!!!\n");

    system("pause");
    
    return 0;

}
