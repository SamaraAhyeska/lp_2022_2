#include<stdio.h>

int main() {
    int n, a = 0, g = 0, d = 0;
    do {
        scanf("%d", &n);
        switch(n) {
            case 1:
                a++;
                break;
            case 2:
                g++;
                break;
            case 3:
                d++;
                break;
        }

    } while (n != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
    return 0;
}
