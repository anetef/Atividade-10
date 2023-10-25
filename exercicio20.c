#include<stdio.h>
main(){
    int v1[10], v2[10], impar;

    for(int i = 0; i < 10; i++){
        do{
          fflush(stdin);
          printf("Insira 10 valores no intervalo de 0 - 50:\n  ");
          scanf("%d", &v1[i]);

          if(v1[i] < 0 || v1[i] > 50 ){
            printf("Opcao invalida\n");
          }
    }while(v1[1] < 0 || v1[i] > 50);
    }
    for(int i = 0; i < 10; i++){
    printf("v1: %d, %d \n", v1[i], v1[i +1]);
    }

    impar = 0;

    for(int i = 0; i < 10; i++){
        if(v1[i] % 2!= 0){
            impar= v1[i];
            v2[i] = impar;
            printf("numeros impar: %d\n", v2[i]);
        
        }
    }

}