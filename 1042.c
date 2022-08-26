#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int menor, meio, maior;
    if (a <= b && a <= c) {
        menor = a;
    } else if (b <= a && b <= c) {
        menor = b;
    } else {
        menor = c;
    }
    if (a >= b && a >= c) {
        maior = a;
    } else if (b >= a && b >= c) {
        maior = b;
    } else {
        maior = c;
    }
    if (a != maior && a != menor) {
        meio = a;
    } else if (b != maior && b != menor) {
        meio = b;
    } else {
        meio = c;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", menor, meio, maior, a, b, c);
    return 0;
}
