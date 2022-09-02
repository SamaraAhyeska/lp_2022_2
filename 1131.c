#include<stdio.h>

int main() {
    int r1, r2, r, t = 0, i = 0, g = 0, e = 0;
    do {
        scanf("%d %d", &r1, &r2);
        if (r1 > r2) {
            i++;
        } else if (r2 > r1) {
            g++;
        } else {
            e++;
        }
        t++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &r);
    } while (r == 1);
    printf("%d grenais\n", t);
    printf("Inter:%d\n", i);
    printf("Gremio:%d\n", g);
    printf("Empates:%d\n", e);
    if (g > i) {
        printf("Gremio venceu mais\n");
    } else if (i > g) {
        printf("Inter venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }
    return 0;
}
