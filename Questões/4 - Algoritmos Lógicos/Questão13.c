// Questão 13: Soma da diagonal principal de uma matriz

#include <stdio.h>

#define TAMANHO 4

int somaDiagonalPrincipal(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;

    for (int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][i];
    }

    return soma;
}

int main() {
    int matriz[TAMANHO][TAMANHO];

    printf("Digite os valores da matriz 4x4:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = somaDiagonalPrincipal(matriz);
    printf("A soma da diagonal principal eh: %d\n", soma);

    return 0;
}