#include<stdio.h>

int main() {
    int t = 1, n, i, x;
    scanf("%d", &n);
    while (n != 0) {
        for (i = 1; i <= n; i++) {
            scanf("%d", &x);
            if (x == i) {
                printf("Teste %d\n", t++);
                printf("%d\n\n", i);
            }
        }
        scanf("%d", &n);
    }
    return 0;
}
