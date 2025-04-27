#include <stdio.h>

int potencia(int base, int expoente){
    int resultado = 1;

    for(int i = 0; i < expoente; i++){
        resultado *= base;
    }

    return resultado;
}

int main(){
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if(expoente < 0){
        printf("Expoente negativo não é permitido.\n");
        return -1;
    }

    int resultado = potencia(base, expoente);

    printf("%d^%d = %d\n", base, expoente, resultado);

    return 0;
}


