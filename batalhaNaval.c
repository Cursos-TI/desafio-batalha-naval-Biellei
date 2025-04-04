#include <stdio.h>

#define TAMANHO 10  // Define o tamanho do tabuleiro
#define NAVIO 3      // Representação do navio
#define AGUA 0       // Representação da água
#define AREA_AFETADA_PELA_ABILIDADE 5 // Representação da abilidade

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

void posicionarAbilidades(int tabuleiro[TAMANHO][TAMANHO], int x5, int y5, int tamanho5, int x6, int y6, int tamanho6, int x7, int y7, int tamanho7, int x8, int y8, int tamanho8, int x9, int y9, int tamanho9, int x10, int y10, int tamanho10, int x11, int y11, int tamanho11) {
    // Posiciona Abilidade cone
    for (int i = 0; i < tamanho5; i++) {
        tabuleiro[x5][y5 + i] = AREA_AFETADA_PELA_ABILIDADE;
    }

   for (int i = 0; i < tamanho6; i++) {
        tabuleiro[x6][y6 + i] = AREA_AFETADA_PELA_ABILIDADE;
    }

    for (int i = 0; i < tamanho7; i++) {
        tabuleiro[x7][y7 + i] = AREA_AFETADA_PELA_ABILIDADE;
    }

    // Posiciona Abilidade octaedro
    for (int i = 0; i < tamanho8; i++) {
        tabuleiro[x8][y8 + i] = AREA_AFETADA_PELA_ABILIDADE;
    }

    for (int i = 0; i < tamanho9; i++) {
        tabuleiro[x9 + i][y9] = AREA_AFETADA_PELA_ABILIDADE;
    }

    // Posiciona Abilidade cruz
    for (int i = 0; i < tamanho10; i++) {
        tabuleiro[x10 + i][y10] = AREA_AFETADA_PELA_ABILIDADE;
    }

    for (int i = 0; i < tamanho11; i++) {
        tabuleiro[x11][y11 + i] = AREA_AFETADA_PELA_ABILIDADE;
    }
}

void exibirCoordenadasNavios(int x1, int y1, int tamanho1, int x2, int y2, int tamanho2, int x3, int y3, int tamanho3, int x4, int y4, int tamanho4) {
    
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
    for (int i = 0; i < tamanho4; i++) {
    }
}

void exibirCordenadasAbilidades(int x5, int y5, int tamanho5, int x6, int y6, int tamanho6, int x7, int y7, int tamanho7, int x8, int y8, int tamanho8, int x9, int y9, int tamanho9, int x10, int y10, int tamanho10, int x11, int y11, int tamanho11) {
    
    // Abilidade cone
    for (int i = 0; i < tamanho5; i++) {
    }

    for (int i = 0; i < tamanho6; i++) {
    }

    for (int i = 0; i < tamanho7; i++) {
    }

    // Abilidade octaedro
    for (int i = 0; i < tamanho8; i++) {
    }

    for (int i = 0; i < tamanho9; i++) {
    }

    // Abilidade cruz
    for (int i = 0; i < tamanho10; i++) {
    }

    for (int i = 0; i < tamanho11; i++) {
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

    // Definição das posições e tamanhos das abilidades
    // abilidade cone
    int x5 = 1, y5 = 4, tamanho5 = 1;
    int x6 = 2, y6 = 3, tamanho6 = 3;
    int x7 = 3, y7 = 2, tamanho7 = 5;

    // abilidade octaedro
    int x8 = 7, y8 = 1, tamanho8 = 3;
    int x9 = 6, y9 = 2, tamanho9 = 3;

    // abilidade cruz
    int x10 = 5, y10 = 6, tamanho10 = 3;
    int x11 = 6, y11 = 4, tamanho11 = 5;

    posicionarNavios(tabuleiro, x1, y1, tamanho1, x2, y2, tamanho2, x3, y3, tamanho3, x4, y4, tamanho4);
    posicionarAbilidades(tabuleiro, x5, y5, tamanho5, x6, y6, tamanho6, x7, y7, tamanho7, x8, y8, tamanho8, x9, y9, tamanho9, x10, y10, tamanho10, x11, y11, tamanho11);
    exibirCoordenadasNavios(x1, y1, tamanho1, x2, y2, tamanho2, x3, y3, tamanho3, x4, y4, tamanho4);
    exibirCordenadasAbilidades(x5, y5, tamanho5, x6, y6, tamanho6, x7, y7, tamanho7, x8, y8, tamanho8, x9, y9, tamanho9, x10, y10, tamanho10, x11, y11, tamanho11);
    imprimirTabuleiro(tabuleiro);

    return 0;
}