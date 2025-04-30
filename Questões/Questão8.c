#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
} Produto;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrarProduto(Produto produtos[], int *n) {
    printf("\nDigite o nome do produto: ");
    fgets(produtos[*n].nome, sizeof(produtos[*n].nome), stdin);
    strtok(produtos[*n].nome, "\n");  // remove o \n lido pelo fgets

    printf("Digite o código do produto: ");
    scanf("%d", &produtos[*n].codigo);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &produtos[*n].quantidade);

    printf("Digite o preço do produto: ");
    scanf("%f", &produtos[*n].preco);

    limparBuffer(); // limpa o \n deixado por scanf
    (*n)++;
}

void buscarProduto(Produto produtos[], int n) {
    int codigo;
    printf("\nDigite o código do produto que deseja buscar: ");
    scanf("%d", &codigo);
    limparBuffer();

    for (int i = 0; i < n; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado: \n - Nome: %s, Código: %d, Quantidade: %d, Preço: %.2f\n",
                   produtos[i].nome, produtos[i].codigo, produtos[i].quantidade, produtos[i].preco);
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

void listarProdutos(Produto produtos[], int n) {
    printf("\nLista de produtos:\n");
    for (int i = 0; i < n; i++) {
        printf(" - Nome: %s, Código: %d, Quantidade: %d, Preço: %.2f\n",
               produtos[i].nome, produtos[i].codigo, produtos[i].quantidade, produtos[i].preco);
    }
}

int main() {
    Produto produtos[100];
    int n = 0, opcao;

    do {
        printf("\nMenu:\n");
        printf("\n1. Cadastrar produto\n2. Buscar produto\n3. Listar produtos\n4. Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);
        limparBuffer();

        switch (opcao) {
            case 1:
                cadastrarProduto(produtos, &n);
                break;
            case 2:
                buscarProduto(produtos, n);
                break;
            case 3:
                listarProdutos(produtos, n);
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