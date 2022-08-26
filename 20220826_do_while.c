#include<stdio.h>

int main() {

    int x;

    do {
        printf("1. Continuar\n");
        printf("0. Sair\n");
        scanf("%d", &x);

        /*switch(x) {
        }*/

    } while (x != 0);

    return 0;
}
