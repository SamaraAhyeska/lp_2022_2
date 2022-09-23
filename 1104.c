#include<stdio.h>

int main() {
    int ca, cb;
    int a[100001], b[100001];
    while (scanf("%d %d", &ca, &cb) == 2 && ca > 0 && cb > 0) {

        int trocasAlice = 0, trocasBeatriz = 0, i, x;
        for (i = 0; i <= 100000; i++) {
            a[i] = 0;
            b[i] = 0;
        }
        for (i = 0; i < ca; i++) {
            scanf("%d", &x);
            a[x] = 1;
        }
        for (i = 0; i < cb; i++) {
            scanf("%d", &x);
            b[x] = 1;
        }
        for (i = 0; i <= 100000; i++) {
            if (a[i] == 1 && b[i] == 0) {
                trocasAlice++;
            }
            if (b[i] == 1 && a[i] == 0) {
                trocasBeatriz++;
            }
        }
        if (trocasAlice < trocasBeatriz) {
            printf("%d\n", trocasAlice);
        } else {
            printf("%d\n", trocasBeatriz);
        }
    }
    return 0;
}
