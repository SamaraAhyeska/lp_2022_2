#include<stdio.h>

int main() {
    int i, j, n, s = 0;
    scanf("%d", &n);
    int m[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
            s += m[i][j];
        }
    }
    printf("%d\n", s);
    return 0;
}
