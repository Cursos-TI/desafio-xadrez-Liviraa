#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int b, r, t; // B = BISPO // R = RAIHA // T = TORRE //
    int movimento = 0; // Contador geral para todos os loops.
    
    printf("Bem-vindo ao Jogo de Xadrez!\n");

    // Movimento do Bispo em diagonal a partir da sua posição.
    printf("Movimentação da peça: Bispo (Posição a1).\n");

    for (movimento = 1; movimento <= 5; movimento++){
        printf("Bispo move-se para direita e para cima %d.\n", movimento);
    }
    // Movimento da Rainha em horizonal a partir de sua posição.
    printf("Movimentação da peça: Rainha (Posição h3).\n");
    
    movimento = 1;
    do {
        printf("Rainha move-se para à esquerda %d.\n", movimento); movimento++;
  } while (movimento <= 8);

    // Movimento da Torre em vertical a partir da sua posição.
    printf("Movimentação da peça: Torre (Posição a2).\n");

    movimento = 1;
    do {
        printf("Torre move-se para cima %d.\n", movimento); movimento++;
    } while (movimento <= 5);


    return 0;
}
