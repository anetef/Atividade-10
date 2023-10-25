#include<stdio.h>

main(){
    int v1[10], v2[10], par, impar;

    for(int i = 0; i < 10; i++){
          printf("Insira 10 valores: ");
          scanf("%d", &v1[i]);

    }
    for(int i = 0; i < 10; i++){
        if(v1[i] % 2 == 0){
            par= v1[i];
            v2[i] = par;
            printf("Valores pares:%d\n", v2[i]);
        }
    }
    for(int i = 0; i < 10; i++)
            if(v1[i] % 2 != 0){
            impar= v1[i];
            v2[i] = impar;
            printf("Valores impares:%d\n", v2[i]);
        }
}