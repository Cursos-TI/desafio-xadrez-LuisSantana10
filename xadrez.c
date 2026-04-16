#include <stdio.h>


// Mover o bispo
void MoverBispo(int casas){
    if (casas > 0)
    {
        printf("Cima/Direita\n");
        MoverBispo(casas - 1);
    }
    
}


// Mover a torre
void MoverTorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        MoverTorre(casas - 1);
    }
    
}


// Mover o rainha
void MoverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        MoverRainha(casas - 1);
    }
    
}


// Mover o cavalo
void MoverCavalo(int casas){
    if (casas > 0)
    {
        printf("Baixo\n");
        MoverCavalo(casas - 1);
    }
    
}



int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
int bispo, casasbispo;
int torre = 1, casastorre;
int rainha = 1, casasrainha;
int cavalo, cavaloCompleto, casascavalo;
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
    printf("Escolha quantas casas você quer mover: ");
    scanf("%d", &casasbispo);
    MoverBispo(casasbispo);
    
        break;
    case 2:
    // Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da torre:\n");
    printf("Escolha quantas casas você quer mover: ");
    scanf("%d", &casastorre);

    MoverTorre(casastorre);
        break;
    case 3:
    // Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimentação da rainha:\n");
    printf("Escolha quantas casas você quer mover: ");
    scanf("%d", &casasrainha);

    MoverTorre(casasrainha);
        break;
    case 4:
    // Movimentação do Cavalo

    printf("Movimentação do cavalo:\n");
    printf("Escolha quantas casas você quer mover: ");
    scanf("%d", &casascavalo);

    MoverTorre(casascavalo);
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
