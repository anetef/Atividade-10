#include <stdio.h>

int main() {
    int aluno, numalto, numbaixo;
    double altura, alturaAlta, alturaBaixa;

    printf("Digite o número do aluno e sua altura (em metros): ");
    scanf("%d %lf", &aluno, &altura);
    
    numalto = aluno;
    numbaixo = aluno;
    alturaAlta = altura;
    alturaBaixa = altura;

    for (int i = 1; i < 10; i++) {
        printf("Digite o numero do aluno e sua altura (em metros): ");
        scanf("%d %lf", &aluno, &altura);

        if (altura > alturaAlta) {
            alturaAlta = altura;
            numalto = aluno;
        }

        if (altura < alturaBaixa) {
            alturaBaixa = altura;
            numbaixo = aluno;
        }
    }

    printf("Aluno mais alto: Número %d, Altura %.2lf metros\n", numalto, alturaAlta);
    printf("Aluno mais baixo: Número %d, Altura %.2lf metros\n", numbaixo, alturaBaixa);

    return 0;
}