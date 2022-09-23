#include<stdio.h>

int main() {
    int a, v, i, x, y, teste = 1;
    int t[101];
    while (scanf("%d %d", &a, &v) == 2 && a > 0 && v > 0) {
        int maxVoos = 0;
        for (i = 0; i <= 100; i++) {
            t[i] = 0;
        }
        for (i = 0; i < v; i++) {
            scanf("%d %d", &x, &y);
            t[x]++;
            t[y]++;
            if (t[x] > maxVoos) maxVoos = t[x];
            if (t[y] > maxVoos) maxVoos = t[y];
        }
        printf("Teste %d\n", teste++);
        for (i = 0; i <= 100; i++) {
            if (t[i] == maxVoos) {
                printf("%d ", i);
            }
        }
        printf("\n\n");
    }
    return 0;
}
