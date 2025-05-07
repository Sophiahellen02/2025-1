// Questão 5: Interseção de vetores

#include <stdio.h>

void intersecaoVetores(int v1[], int ti, int v2[], int t2){
    printf("Elementos comuns entre os vetores: \n");

    for (int i = 0; i < ti; i++){
        for (int j = 0; j < t2; j++){
            if (v1[i] == v2[j]){
                printf("%d ", v1[i]);
                break;
            }
        }
    }

    printf("\n");
}

int main(){
    int v1[5], v2[5];

    printf("DIgite 5 números inteiros para o primeiro vetor: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &v1[i]);
    }

    printf("DIgite 5 números inteiros para o segundo vetor: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &v2[i]);
    }

    intersecaoVetores(v1, 5, v2, 5);

    return 0;
}