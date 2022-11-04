#include<stdio.h>
#define TAM 12

//(i + j) < TAM - 1 Acima DS
//(i + j) == TAM - 1
//(i + j) > TAM - 1 Abaixo DS

int main() {
    double v[TAM][TAM], soma = 0;
    int l, i, j, qtd = 0;
    char o;
    scanf("%c", &o);
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            scanf("%lf", &v[i][j]);
            if (j > i && (i + j) < (TAM - 1)) {
                soma += v[i][j];
                qtd++;
            }
        }
    }
    if (o == 'M') soma /= qtd;
    printf("%.1lf\n", soma);
    return 0;
}
