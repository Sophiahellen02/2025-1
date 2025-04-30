// Questão 7: Cadastro de Alunos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int matricula;
    float media;
} Aluno;

void mostrarAprovados(Aluno alunos[], int n) {
    printf("\nAlunos aprovados:\n");
    for (int i = 0; i < n; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Nome: %s, Matricula: %d, Media: %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].media);
        }
    }
}

int main(){
    int n;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    Aluno alunos[n];

    for (int i = 0; i < n; i++){
        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite a media do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);
    }

    mostrarAprovados(alunos, n);

    return 0;
}