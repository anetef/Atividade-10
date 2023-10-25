#include <stdio.h>

int main() {
    int vetor[100], numero = 1, contagem= 0;

    while (contagem < 100) {
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[contagem] = numero;
            contagem++;
        }
        numero++;
    }

    printf("Os 100 primeiros naturais que não são multiplos de 7 ou não terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n"); 
        }
    }

    return 0;
}
