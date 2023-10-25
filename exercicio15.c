#include<stdio.h>

main(){
int vetor[20], valorIgual;

    for(int i = 0; i < 20; i++){
          printf("Insira 20 valores: ");
          scanf("%d", &vetor[i]);

    }

    for (int i = 0; i < 20; i++){
        valorIgual = 0;

        for(int j = i + 1; j < 20; j++){
            if(vetor[i] == vetor[j]){
                valorIgual = 1;
            }
        }
        if(valorIgual!=1){
           printf("Elementos do vetor: %d \n",vetor[i]);
        }

    }
}