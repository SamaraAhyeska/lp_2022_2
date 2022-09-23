#include<stdio.h>

int main() {
    int n, x, i;
    int f[2001];
    for (i = 0; i <= 2000; i++) {
        f[i] = 0;
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        f[x]++;
    }
    for (i = 0; i <= 2000; i++) {
        if (f[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, f[i]);
        }
    }
    return 0;
}
