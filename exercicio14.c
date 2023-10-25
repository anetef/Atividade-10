#include<stdio.h>

main(){
    int vetor[10], valorIgual ;

    for(int i = 0; i < 10; i++){
          printf("Insira 10 valores: ");
          scanf("%d", &vetor[i]);

    }
    for (int i = 0; i < 10; i++){
        valorIgual = 0;

        for(int j = i + 1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                valorIgual = 1;
            }
        }
        if(valorIgual==1){
           printf("Valores iguais encontrados: %d \n",vetor[i]);
        }

    }
}