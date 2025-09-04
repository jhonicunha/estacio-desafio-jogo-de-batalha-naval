#include <stdio.h>

//Desafio Jogo de Batalha Naval - Nível Novato

int main() {

    // Criando o tabuleiro e inicializando com água (0)
    int tabuleiro[10][10];
    int linha, coluna;

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Posicionando os Navios (numero 3)
    int i;
    
    // Posicionando Navio 1
    for (i = 0; i < 3; i++) {
        tabuleiro[2][2 + i] = 3;
    }
    
    // Posicionando Navio 2
    for (i = 0; i < 3; i++) {
        tabuleiro[5 + i][5] = 3;
    }

    // Imprimir o Tabuleiro
    printf("Tabuleiro Batalha Naval\n");
    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}