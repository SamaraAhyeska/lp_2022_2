#include<stdio.h>

int main() {
    int n, i, t = 1, j, z, d;
    scanf("%d", &n);
    while (n > 0) {
        printf("Teste %d\n", t++);
        d = 0;
        for (i = 0; i < n; i++) {
            scanf("%d %d", &j, &z);
            d += (j - z);
            printf("%d\n", d);
        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}
