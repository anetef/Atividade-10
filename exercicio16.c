#include<stdio.h>

main(){
float vetor[5];

    printf("Insira 5 valores: ");
    for(int i = 0; i < 5; i++){
    scanf("%f",&vetor[i]);
 }
 int codigo; 
 while(1){
    printf("Digite um codigo (0 para sair, 1 para mostrar direto, 2 para mostrar inverso): ");
        scanf("%d", &codigo);

        if(codigo == 0){

            break;
        }else if(codigo == 1){
            printf("Vetor na ordem direta: ");
            for (int i = 0; i < 5; i++) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            
        }else if(codigo == 2){
            printf("Vetor na ordem inversa:");
               for (int i = 4; i >= 0; i--){
                printf("%.2f", vetor[i]);
               } 
               printf("\n");
        }else{
            printf("Codigo invalido\n");
        }
 }
 return 0;
}
