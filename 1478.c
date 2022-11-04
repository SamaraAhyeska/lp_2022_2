#include<stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n > 0) {
        int m[n][n];

        int i, j, k;

        for (i = 0; i < n; i++) {
            int v = 1;
            for (j = i; j < n; j++) {
                m[i][j] = v++;
            }
            v = 1;
            for (j = i; j >= 0; j--) {
                m[i][j] = v++;
            }
        }



        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (j != 0) {
                    printf(" ");
                }
                printf("%3d", m[i][j]);

            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
