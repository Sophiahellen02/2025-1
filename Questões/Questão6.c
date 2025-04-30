// Questão 6: Soma de Matrizes

#include <stdio.h>

void somaMatrizes(int m1[3][3], int m2[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void exibirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m1[3][3], m2[3][3], resultado[3][3];

    printf("Digite os elementos da primeira matriz (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    somaMatrizes(m1, m2, resultado);

    printf("\nResultado da soma das matrizes:\n");
    exibirMatriz(resultado);

    return 0;
}