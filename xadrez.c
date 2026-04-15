#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
int bispo;
int torre = 1;
int rainha = 1;
int cavalo, cavaloCompleto;
int escolha1, escolha2;

do
{
    printf("*** Xadrez ***\n");
    printf("Bem vindo(a) ao jogo de xadrez!\n");
    printf("Selecione qual peça deve ser movimentada:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
    // Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimentação do bispo: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Cima/Direita\n");
    }
        break;
    case 2:
    // Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimentação da torre:\n");
    while (torre <= 5)
    {
        
        printf("Direita\n");
        
        torre++;
    }
        break;
    case 3:
    // Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimentação da rainha:\n");
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
        break;
    case 4:
    // Movimentação do Cavalo

    printf("Movimentação do cavalo:\n");
    for (cavaloCompleto = 1; cavaloCompleto == 1; cavaloCompleto--)
    {
        cavalo = 0;
        while (cavalo < 2)
        {
            printf("Baixo\n");
            cavalo++;
        }
        
        printf("Esquerda\n");

    }
    

    break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

    printf("*** Xadrez ***\n");
    printf("Ação concluída, selecione:\n");
    printf("1. Recomeçar\n");
    printf("2. Sair\n");
    scanf(" %d", &escolha2);
    switch (escolha2)
    {
    case 1:
        printf("Recomeçando...\n");
        break;
    case 2:
        printf("Saindo...\n");
        break;
    
    default:
        printf("Opção inválida.\n");
        break;
    }
    
    
    
} while (escolha2 != 2); 
    
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
