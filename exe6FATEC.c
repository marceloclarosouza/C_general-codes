/*Escreva um programa que armazene números inteiros em uma pilha estática. Você
deverá elaborar um menu com as opções: insere (push), remove (pop) e mostra pilha.
Cada opção do menu deverá ser implementado em uma função específica para isso.
(você poderá utilizar o programa implementado em sala e alterá-lo para adicionar as
funções solicitadas neste exercício.).*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void cabecalho (){
    printf("************************************************\n");
    printf("                    M E N U                     \n");
    printf("************************************************\n");
}

void push (int *vet)
{
    int fim = -1;
    if (fim < (MAX -1)){
        fim++;
        printf("Digite o numero que deseja adicionar\n");
        scanf("%d", &vet[fim]);
    }
    else
    {
        printf("Impossivel inserir!\nVetor cheio!");
    }
}

void pop (int *vet)
{
    int fim;

    if (fim >= 0){
        fim--;
        printf("Removido com sucesso!");
    }
    else
    {
        printf("Impossivel remover.\nVetor vazio!!!\n");
    }
}

void mostra (int *vet)
{
    int i, fim;

    if (fim >=0){
        for (i = 0; i <= fim; i++)
            printf("%d\t", &vet[i]);
    }
    else
    {
        printf("Vetor vazio!!!\n");
    }
}

int main ()
{
    int vet[MAX], fim = -1, i, op;

    do {
        system("cls");
        cabecalho();
        printf("\n1 - Inserir");
        printf("\n2 - Retirar");
        printf("\n3 - Mostrar");
        printf("\n9 - Sair");
        scanf("%d", &op);

            switch (op){

                case 1: syatem("cls");
                        push(&vet);
                        printf("Adicionado com sucesso\n");
                        system ("pause");
                        break;

                case 2: syatem("cls");
                        pop(&vet);
                        printf("Removido com sucesso\n");
                        system("pause");
                        break;

                case 3: syatem("cls");
                        mostra(&vet);
                        system("pause");
                        break; 
            }

    } while(op!=9);
    return 0;
}