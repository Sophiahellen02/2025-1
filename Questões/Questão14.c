// Questão 14: Cifra de César

#include <stdio.h>
#include <string.h>

void cifraDeCesar(char mensagem[], int deslocamento) {
    for (int i = 0; i < strlen(mensagem); i++) {
        char c = mensagem[i];

        if (c >= 'A' && c <= 'Z') {
            mensagem[i] = ((c - 'A' + deslocamento) % 26) + 'A';
        }
        else if (c >= 'a' && c <= 'z') {
            mensagem[i] = ((c - 'a' + deslocamento) % 26) + 'a';
        }
    }
}

int main() {
    char mensagem[100];
    int deslocamento;

    printf("Digite a mensagem que deseja criptografar: ");
    scanf(" %[^\n]", mensagem);
    printf("Digite o valor do deslocamento: ");
    scanf("%d", &deslocamento);

    cifraDeCesar(mensagem, deslocamento);

    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}