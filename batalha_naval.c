#include <stdio.h>

// Desafio Jogo de Batalha Naval - Nível Aventureiro


int main() {

    // Criando o Tabuleiro
    int tabuleiro[10][10];
    int linha, coluna;

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Posicionar os Quatro Navios (3)
    int i;

    // Navio 1 (Horizontal) na linha 2, colunas 2, 3 e 4
    for (i = 0; i < 3; i++) {
        tabuleiro[2][2 + i] = 3;
    }

    // Navio 2 (Vertical) na coluna 5, linhas 5, 6 e 7
    for (i = 0; i < 3; i++) {
        tabuleiro[5 + i][5] = 3;
    }

    // Navio 3 (Diagonal Principal) nas posições [0][0], [1][1], [2][2]
    for (i = 0; i < 3; i++) {
        tabuleiro[0 + i][0 + i] = 3;
    }

    // Navio 4 (Diagonal Secundária) nas posições [0][9], [1][8], [2][7]
    for (i = 0; i < 3; i++) {
        tabuleiro[0 + i][9 - i] = 3;
    }

    // Imprimir o Tabuleiro Final
    printf("Tabuleiro Batalha Naval (Nivel Aventureiro)\n");
    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}