#include<stdio.h>
#define TAM 12

int main() {
    double v[TAM][TAM], soma = 0;
    int l, i, j, qtd = 0;
    char o;
    scanf("%d %c", &l, &o);
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            scanf("%lf", &v[i][j]);
            if (i == l) {
                soma += v[i][j];
                qtd++;
            }
        }
    }
    if (o == 'M') soma /= qtd;
    printf("%.1lf\n", soma);
    return 0;
}
