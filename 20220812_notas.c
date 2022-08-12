#include<stdio.h>

int main() {
    double nota, percPresencas;
    int qtdPresencas, qtdAulas;
    scanf("%lf %d %d", &nota, &qtdPresencas, &qtdAulas);
    // casting: forçar uma variavel de um tipo a ser de outro,
    // colocando o tipo de dados entre parenteses antes da var.
    percPresencas = ((double) qtdPresencas) / ((double) qtdAulas);

    if (nota >= 60 && percPresencas >= 0.75) {
        printf("Aprovado\n");
    } else if (nota < 60 && percPresencas < 0.75) {
        printf("Reprovado por nota e frequencia\n");
    } else if (nota < 60) {
        printf("Reprovado por nota\n");
    } else {
        printf("Reprovado por frequencia\n");
    }

    return 0;
}
