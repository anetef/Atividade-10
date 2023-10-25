#include<stdio.h>

main(){
    int A[10], B[10], C[10];
    for(int i = 0; i < 2; i++){
          printf("Insira 10 valores para A: ");
          scanf("%d", &A[i]);

          printf("Insira 10 valores para B: ");
          scanf("%d", &B[i]);
          }

          for(int i = 0; i < 2; i++){
            C[i] = 0;
            C[i] = A[i] - B[i];
            printf("Dados de C: %d\n", C[i]);
          }
    }
