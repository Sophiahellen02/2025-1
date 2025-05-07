// Questão 4: Frequência de Números

#include <stdio.h>

void frequenciaNumeros(int numeros[], int tamanho){
    int frequencia[101] = {0};

    for (int i = 0; i < tamanho; i++){
        frequencia[numeros[i]]++;
    }

    printf("Frequência dos números:\n");
    for (int i = 0; i <= 100; i++){
        if (frequencia[i] > 0){
            printf("Número %d: %d vez(es)\n", i, frequencia[i]);
        }
    }
}

int main(){
    int numeros[10];

    printf("Digite 10 números inteiros entre 0 e 100:");
    for (int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }

    frequenciaNumeros(numeros, 10);

    return (0);
}