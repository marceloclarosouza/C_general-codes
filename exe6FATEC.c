/*Escreva um programa que armazene números inteiros em uma pilha estática. Você
deverá elaborar um menu com as opções: insere (push), remove (pop) e mostra pilha.
Cada opção do menu deverá ser implementado em uma função específica para isso.
(você poderá utilizar o programa implementado em sala e alterá-lo para adicionar as
funções solicitadas neste exercício.).*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10


//void opcoes (int op)
//void push();
//void pop();
//void print();

#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void cabecalho ()
{
    printf("************************************************\n");
    printf("                    M E N U                     \n");
    printf("************************************************\n");
}

void rodape ()
{
    printf("************************************************\n");
    printf("************************************************\n");
}

void push (int *fim, int *vet)
{
    
    if (*fim < (MAX -1))
    {
        *fim = *fim +1;
        printf("Digite o numero que deseja adicionar:\n");
        scanf("%d", &vet[*fim]);
    }
    else
    {
        printf("Impossivel inserir!\nVetor cheio!\n");
    }
}

void pop (int *fim, int *vet)
{
    if (*fim >= 0){
        *fim = *fim-1;
        printf("Removido com sucesso!\n");
    }
    else
    {
        printf("Impossivel remover.\nVetor vazio!!!\n");
    }
}

void mostra (int *fim, int *vet)
{
    int i;

    if (*fim >=0){
        for (i = 0; i <= *fim; i++)
            printf("%d\t", vet[i]);
    }
    else
    {
        printf("Vetor vazio!!!\n");
    }
}

int main ()
{
    int vet[MAX], op, fim = -1;

    do {
        system("cls");
        cabecalho();
        printf("\n1 - Inserir\n");
        printf("\n2 - Retirar\n");
        printf("\n3 - Mostrar\n");
        printf("\n9 - Sair\n");
        rodape();
        scanf("%d", &op);
        

            switch (op){

                case 1: system("cls");
                        push(&fim, vet);
                        printf("Adicionado com sucesso!\n");
                        system ("pause");
                        break;

                case 2: system("cls");
                        pop(&fim, vet);
                        system("pause");
                        break;

                case 3: system("cls");
                        mostra(&fim, vet);
                        system("pause");
                        break;
            }

    } while(op!=9);
    return 0;
}