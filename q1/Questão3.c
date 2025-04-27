#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int resultado = inverternumero(numero);
    printf("O inverso de %d eh %d\n", numero, resultado);

    return 0;
}

int inverternumero(int numero){
    int inverso = 0;
    while (numero != 0){
        int digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero /= 10;
    }
 
    return inverso;
}
