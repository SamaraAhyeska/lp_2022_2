#include<stdio.h>

int main() {
    int b, resto, n50, n10, n5, n1, t = 1;
    scanf("%d", &b);
    while (b > 0) {
        n50 = b / 50;
        b %= 50;
        n10 = b / 10;
        b %= 10;
        n5 = b / 5;
        n1 = b % 5;
        printf("Teste %d\n", t++);
        printf("%d %d %d %d\n\n", n50, n10, n5, n1);
        scanf("%d", &b);
    }
    return 0;
}
