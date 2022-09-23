#include<stdio.h>

int main() {
    int n, m, i, j, x, qtdJogadores = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        int fezGol = 0;
        for (j = 0; j < m; j++) {
            scanf("%d", &x);
            if (x > 0) fezGol++;
        }
        if (fezGol == m) qtdJogadores++;
    }
    printf("%d\n", qtdJogadores);
    return 0;
}
