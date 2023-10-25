#include <stdio.h>

int main() {
    int vetor[10], x;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero inteiro x: ");
    scanf("%d", &x);

    printf("Multiplos de %d no vetor: ", x);
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("Nenhum multiplo encontrado.");
    }

    printf("\n");

    return 0;
}
