// Questão 11: Busca binária

#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == chave) {
            return meio;
        } else if (vetor[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}
int main(void) {
    int vetor[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave;

    printf("Digite o número que deseja buscar: ");
    scanf("%d", &chave);

    int resultado = buscaBinaria(vetor, tamanho, chave);

    if (resultado != -1) {
        printf("\nNúmero encontrado no índice %d.\n", resultado);
    } else {
        printf("Número não encontrado.\n");
    }

    return 0;
}