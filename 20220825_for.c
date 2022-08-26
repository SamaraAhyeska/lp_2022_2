#include<stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    for (i = 1; i <= n; i += 2) {
        printf("%d\n", i);
    }

    for (;;) {

        //break;
    }

    return 0;
}
