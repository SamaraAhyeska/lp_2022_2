#include<stdio.h>

int main() {
    int a, b, c, d, e, qtdPares = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a % 2 == 0) qtdPares++;
    if (b % 2 == 0) qtdPares++;
    if (c % 2 == 0) qtdPares++;
    if (d % 2 == 0) qtdPares++;
    if (e % 2 == 0) qtdPares++;
    printf("%d valores pares\n", qtdPares);
    return 0;
}

