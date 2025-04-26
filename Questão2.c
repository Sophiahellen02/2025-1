#include <stdio.h>

int main(){
    int base, expoente;

    // Solicita ao usuário a base e o expoente 
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    // Verifica se o expoente é negativo, caso seja exibe mensagem de erro
    if(expoente < 0){
        printf("Expoente negativo não é permitido.\n");
        return -1; // Retorna -1 para indicar erro
    }

    // Chama a função potencia para calcular a potência
    int resultado = potencia(base, expoente);

    // Exibe o resultado
    printf("%d^%d = %d\n", base, expoente, resultado);

    return 0;
}

// Função para calcular a potência de um número inteiro
int potencia(int base, int expoente){
    int resultado = 1;

    // Calcula a potência multiplicando a base pelo número de vezes do expoente
    for(int i = 0; i < expoente; i++){
        resultado *= base;
    }

    return resultado;
}
