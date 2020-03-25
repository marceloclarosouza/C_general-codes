/*Escreva uma função que receba uma matriz quadrada de ordem 5X5 (números inteiros)
e retorne o maior valor da diagonal secundária*/

#include<stdio.h>

void mvds (int matrix[5][5], int *maior)
{
    int i, j;
    *maior = 0;

    for (i = 0; i < 5; i++)//seleciona o maior valor da diagonal secundaria
        for (j = 0; j < 5; j++)
            if (i+j == 4)
                if (matrix[i][j] > *maior)
                    *maior = matrix[i][j];

    printf("\n");
}

int main ()
{
    int i, j, matrix[5][5], maior;

    system("cls");
    for (i = 0; i < 5; i++)//gera uma matriz [5][5] com numerols aleatorios entre 0 - 100
        for (j = 0; j < 5; j++)
            matrix[i][j] = rand () % 100;
    
    for (i = 0; i < 5; i ++){//inmprime a matiz
        for (j = 0; j < 5; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }


    mvds(matrix,&maior);//busca o maior valor da diag sec da matriz utilizando o ponteiro *maior
    printf("O maior valor de dia sec eh %d\n", maior);
    system("pause");

    return 0;
}
