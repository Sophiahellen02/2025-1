// Questão 9: Agenda de Contatos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char telefone[15];
} Contato;

void adicionarContato(Contato contatos[], int *n) {
    printf("\nDigite o nome do contato: ");
    scanf(" %[^\n]", contatos[*n].nome);
    printf("Digite o telefone do contato: ");
    scanf(" %[^\n]", contatos[*n].telefone);
    (*n)++;
}

void buscarContato(Contato contatos[], int n) {
    char nome[50];
    printf("\nDigite o nome do contato que deseja buscar: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < n; i++) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            printf("Contato encontrado: \n - Nome: %s, Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
            return;
        }
    }
    printf("Contato não encontrado.\n");
}

void listarContatos(Contato contatos[], int n) {
    printf("\nLista de contatos:\n");
    for (int i = 0; i < n; i++) {
        printf(" - Nome: %s, Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
    }
}

int main() {
    Contato contatos[100];
    int n = 0, opcao;

    do {
        printf("\nMenu:\n");
        printf("\n1. Adicionar contato\n2. Buscar contato\n3. Listar contatos\n4. Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato(contatos, &n);
                break;
            case 2:
                buscarContato(contatos, n);
                break;
            case 3:
                listarContatos(contatos, n);
                break;
            case 4:
                printf("\nSaindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 4);

    return 0;
}