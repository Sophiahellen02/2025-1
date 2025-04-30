// Questão 15: Jogo da Forca (console)

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void exibirPalavra(char palavra[], int acertou[]) {
    for (int i = 0; i < strlen(palavra); i++) {
        if (acertou[i]) {
            printf("%c ", palavra[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char palavra[100], letra;
    int tentativas = 6, acertou[100] = {0}, totalAcertos = 0;

    printf("Digite a palavra secreta: ");
    scanf("%s", palavra);

    printf("\033[H\033[J");

    int tamanho = strlen(palavra);

    while (tentativas > 0 && totalAcertos < tamanho) {
        printf("Tentativas restantes: %d\n\n", tentativas);
        exibirPalavra(palavra, acertou);

        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        letra = tolower(letra);

        int acertouLetra = 0;
        for (int i = 0; i < tamanho; i++) {
            if (tolower(palavra[i]) == letra && !acertou[i]) {
                acertou[i] = 1;
                totalAcertos++;
                acertouLetra = 1;
            }
        }

        if (!acertouLetra) {
            tentativas--;
            printf("Letra incorreta!\n");
        }
    }

    if (totalAcertos == tamanho) {
        printf("\nParabéns! Você acertou a palavra: %s\n", palavra);
    } else {
        printf("\nVocê perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}