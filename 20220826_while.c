#include<stdio.h>

int main() {

    int x, qtd = 0;

    scanf("%d", &x);

    while (x > 0) {
        qtd++;
        scanf("%d", &x);
    }
    printf("%d\n", qtd);

    return 0;
}
