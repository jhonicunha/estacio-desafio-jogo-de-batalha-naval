#include <stdio.h>
#include <stdlib.h> // Necessário para a função abs() da habilidade Octaedro

// Desafio Jogo de Batalha Naval - Nível Mestre

// Função para aplicar a habilidade Cruz no tabuleiro
void aplicarHabilidadeCruz(int tabuleiro[10][10], int linha_centro, int coluna_centro) {
    int linha, coluna;
    printf("\nAplicando Habilidade: Cruz em [%d][%d]\n", linha_centro, coluna_centro);

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            if (linha == linha_centro || coluna == coluna_centro) {
                if (tabuleiro[linha][coluna] != 3) {
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }
}

// Função para aplicar a habilidade Octaedro (Losango)
void aplicarHabilidadeOctaedro(int tabuleiro[10][10], int linha_centro, int coluna_centro, int raio) {
    int linha, coluna;
    printf("\nAplicando Habilidade: Octaedro em [%d][%d] com raio %d\n", linha_centro, coluna_centro, raio);

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            if (abs(linha - linha_centro) + abs(coluna - coluna_centro) <= raio) {
                if (tabuleiro[linha][coluna] != 3) {
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }
}

int main() {
    // Criando o tabuleiro
    int tabuleiro[10][10];
    int linha, coluna;

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Posicionar os Quatro Navios (3)
    int i;
    for (i = 0; i < 3; i++) {
        tabuleiro[2][2 + i] = 3; // Horizontal
        tabuleiro[5 + i][5] = 3; // Vertical
        tabuleiro[0 + i][0 + i] = 3; // Diagonal Principal
        tabuleiro[0 + i][9 - i] = 3; // Diagonal Secundária
    }

    // APLICAR UMA HABILIDADE ESPECIAL (5)
    aplicarHabilidadeOctaedro(tabuleiro, 7, 2, 2);


    // Imprimir o Tabuleiro Final
    printf("\nTabuleiro Batalha Naval\n");
    printf(" 0 - Agua | 3 - Navio | 5 - Area de Habilidade\n\n");
    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}