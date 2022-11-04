#include<stdio.h>

/*int i, j, k, l;

for (i = 1, j = 0, k = n - 1; i <= (n + 1) / 2; i++, j++, k--) {
    for (l = j; l <= k; l++) {
        m[j][l] = i;
        m[k][l] = i;
        m[l][j] = i;
        m[l][k] = i;
    }
}*/

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n > 0) {
        int m[n][n];

        int v = 1, li = 0, lf = n - 1, i, j;

        while (li <= lf) {

            for (i = li; i <= lf; i++) {
                for (j = li; j <= lf; j++) {
                    m[i][j] = v;
                }
            }

            v++;
            li++;
            lf--;
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
