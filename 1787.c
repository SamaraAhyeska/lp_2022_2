#include<stdio.h>

int ePotencia(int n) {
    int x = 1;
    while (x < n) {
        x *= 2;
    }
    if (x == n) return 1;
    else return 0;
}

int main() {
    int n, i;
    while (scanf("%d", &n) == 1 && n > 0) {
        int pUi = 0, pRi = 0, pIn = 0;
        int ui, ri, in;
        for (i = 0; i < n; i++) {
            scanf("%d %d %d", &ui, &ri, &in);
            if (ePotencia(ui)) pUi++;
            if (ePotencia(ri)) pRi++;
            if (ePotencia(in)) pIn++;
            if (ePotencia(ui) && ui > ri && ui > in) pUi++;
            if (ePotencia(ri) && ri > ui && ri > in) pRi++;
            if (ePotencia(in) && in > ui && in > ri) pIn++;
        }
        //printf("%d %d %d\n", pUi, pRi, pIn);
        if (pUi > pRi && pUi > pIn) {
            printf("Uilton\n");
        } else if (pRi > pUi && pRi > pIn) {
            printf("Rita\n");
        } else if (pIn > pUi && pIn > pRi) {
            printf("Ingred\n");
        } else {
            printf("URI\n");
        }
    }
    return 0;
}
