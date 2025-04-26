#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n){
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int inicio, fim;

    printf("Digite o número inicial: ");
    scanf("%d", &inicio);
    printf("Digite o número final: ");
    scanf("%d", &fim);

    if (inicio > fim){
        printf("Intervalo inválido.\n");
        return 1; 
    }

    printf("Números primos entre %d e %d: ", inicio, fim);

    for (int i = inicio; i <= fim; i++){
        if (ehPrimo(i)){
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
