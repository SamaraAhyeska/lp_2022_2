#include<stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {

        int t1m, t1v, t2m, t2v;
        int p1 = 0, g1 = 0;
        int p2 = 0, g2 = 0;
        int ganhador = 0;

        scanf("%d x %d", &t1m, &t2v);
        scanf("%d x %d", &t2m, &t1v);

        g1 = t1m + t1v;
        g2 = t2m + t2v;

        if (t1m > t2v) {
            p1 += 3;
        } else if (t2v > t1m) {
            p2 += 3;
        } else {
            p1 += 1;
            p2 += 1;
        }

        if (t1v > t2m) {
            p1 += 3;
        } else if (t2m > t1v) {
            p2 += 3;
        } else {
            p1 += 1;
            p2 += 1;
        }

        if (p1 > p2) {
            ganhador = 1;
        } else if (p2 > p1) {
            ganhador = 2;
        } else {
            if (g1 > g2) {
                ganhador = 1;
            } else if (g2 > g1) {
                ganhador = 2;
            } else {
                if (t1v > t2v) {
                    ganhador = 1;
                } else if (t2v > t1v) {
                    ganhador = 2;
                }
            }
        }

        if (ganhador == 0) {
            printf("Penaltis\n");
        } else {
            printf("Time %d\n", ganhador);
        }

    }
    return 0;
}
