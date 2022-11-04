#include<stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int m[n][n];
        int i, j;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                m[i][j] = 3;
                if (i == j) m[i][j] = 1;
                if ((i + j) == (n - 1)) m[i][j] = 2;
                printf("%d", m[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
