#include<stdio.h>

int isPrime(int n){
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    
    return 1;
}

main(){
    int vetor[10], primos[10], numPrimos = 0;

    for (int i = 0; i < 10; i++){
          printf("Insira 10 valores: ", i + 1);
          scanf("%d", &vetor[i]);

        if (isPrime(vetor[i])) {
            primos[numPrimos] = vetor[i];
            numPrimos++;
            }
    }
    printf("Numeros primos encontrados e suas posições:\n");
    for (int i = 0; i < numPrimos; i++) {
        for (int j = 0; j < 10; j++) {
            if (vetor[j] == primos[i]) {
                printf("Numero primo %d: %d (posicao %d)\n", i + 1, primos[i], j);
            }
        }
    }

    return 0;
}