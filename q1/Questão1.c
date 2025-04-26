#include <stdio.h>
#include <stdbool.h>

int main(){
    int inicio, fim;

    // Solicita ao usuário os limites do intervalo 
    printf("Digite o número inicial: ");
    scanf("%d", &inicio);
    printf("Digite o número final: ");
    scanf("%d", &fim);

    // Verifica se os limites estão corretos
    if (inicio > fim){
        printf("Intervalo inválido.\n");
        return 1; // Encerra o programa com erro
    }

    printf("Números primos entre %d e %d: ", inicio, fim);

    // Percorre o intervalo e imprime os números primos
    for (int i = inicio; i <= fim; i++){
        if (ehPrimo(i)){
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}


// Função para verificar se um número é primo
bool ehPrimo(int n){
    if (n <= 1) return false; // 0 e 1 não são primos
    for (int i = 2; i * i <= n; i++){ // Verifica até a raiz quadrada de n
        if (n % i == 0) return false; // Se n for divisível por i, não é primo
    }
    return true; // Se não encontrou divisores, é primo
}