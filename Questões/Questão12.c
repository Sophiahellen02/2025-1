// Questão 12: Verificador de Palíndromo

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return false;
        }
        inicio++;
        fim--;
    }

    return true;
}

int main() {
    char palavra[100];

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    if (ehPalindromo(palavra)) {
        printf("A palavra '%s' é um palíndromo.\n", palavra);
    } else {
        printf("A palavra '%s' não eh um palíndromo.\n", palavra);
    }

    return 0;
}