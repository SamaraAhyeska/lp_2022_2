#include<stdio.h>

int main() {
    double media = 0;
    int idade, qtd = 0;

    do {
        scanf("%d", &idade);
        if (idade >= 0) {
            media += idade;
            qtd++;
        }

    } while (idade >= 0);

    media /= qtd;
    printf("%.2lf\n", media);
    return 0;
}
