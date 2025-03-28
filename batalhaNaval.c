#include <stdio.h>

#define TAMANHO 10  // Define o tamanho do tabuleiro
#define NAVIO 3      // Representação do navio
#define AGUA 0       // Representação da água

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

void posicionarNavios(int tabuleiro[TAMANHO][TAMANHO], int x1, int y1, int tamanho1, int x2, int y2, int tamanho2, int x3, int y3, int tamanho3, int x4, int y4, int tamanho4) {
    // Posiciona o primeiro navio (vertical)
    for (int i = 0; i < tamanho1; i++) {
        tabuleiro[x1 + i][y1] = NAVIO;
    }

    // Posiciona o segundo navio (horizontal)
    for (int i = 0; i < tamanho2; i++) {
        tabuleiro[x2][y2 + i] = NAVIO;
    }

    // Posiciona o terceiro navio (diagonal)
    for (int i = 0; i < tamanho3; i++) {
        tabuleiro[x3 + i][y3 + i] = NAVIO;
    }

    // Posiciona o terceiro navio (diagonal2)
    for (int i = 0; i < tamanho4; i++) {
        tabuleiro[x4 + i][y4 - i] = NAVIO;
    }
}

void exibirCoordenadas(int x1, int y1, int tamanho1, int x2, int y2, int tamanho2, int x3, int y3, int tamanho3, int x4, int y4, int tamanho4) {
    
    // Navio vertical
    for (int i = 0; i < tamanho1; i++) {
    }

    // Navio horizontal
    for (int i = 0; i < tamanho2; i++) {
    }

    // Navio diagonal
    for (int i = 0; i < tamanho3; i++) {
    }

    // Navio diagonal 2
    for (int i = 0; i < tamanho3; i++) {
    }
}

void imprimirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\n## TABULEIRO BATALHA NAVAL: ##\n\n");
    printf("A B C D E F G H I J\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int tabuleiro[TAMANHO][TAMANHO];

    inicializarTabuleiro(tabuleiro);

    // Definição das posições e tamanhos dos navios
    int x1 = 5, y1 = 7, tamanho1 = 3;  // Navio vertical 
    int x2 = 8, y2 = 3, tamanho2 = 3;  // Navio horizontal
    int x3 = 0, y3 = 6, tamanho3 = 3;  // Navio diagonal
    int x4 = 4, y4 = 3, tamanho4 = 3;  // Navio diagonal 2

    posicionarNavios(tabuleiro, x1, y1, tamanho1, x2, y2, tamanho2, x3, y3, tamanho3, x4, y4, tamanho4);
    exibirCoordenadas(x1, y1, tamanho1, x2, y2, tamanho2, x3, y3, tamanho3, x4, y4, tamanho4);
    imprimirTabuleiro(tabuleiro);

    return 0;
}
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 

