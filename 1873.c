#include<stdio.h>
#include<string.h>

int main() {
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int g = 0;
        char o1[10], o2[10];
        scanf("%s %s", o1, o2);
        if (strcmp(o1, "tesoura") == 0) {
            if (strcmp(o2, "papel") == 0 || strcmp(o2, "lagarto") == 0) {
                g = 1;
            }
            if (strcmp(o2, "spock") == 0 || strcmp(o2, "pedra") == 0) {
                g = 2;
            }
        }
        if (strcmp(o1, "papel") == 0) {
            if (strcmp(o2, "pedra") == 0 || strcmp(o2, "spock") == 0) {
                g = 1;
            }
            if (strcmp(o2, "tesoura") == 0 || strcmp(o2, "lagarto") == 0) {
                g = 2;
            }
        }
        if (strcmp(o1, "pedra") == 0) {
            if (strcmp(o2, "lagarto") == 0 || strcmp(o2, "tesoura") == 0) {
                g = 1;
            }
            if (strcmp(o2, "papel") == 0 || strcmp(o2, "spock") == 0) {
                g = 2;
            }
        }
        if (strcmp(o1, "lagarto") == 0) {
            if (strcmp(o2, "spock") == 0 || strcmp(o2, "papel") == 0) {
                g = 1;
            }
            if (strcmp(o2, "pedra") == 0 || strcmp(o2, "tesoura") == 0) {
                g = 2;
            }
        }
        if (strcmp(o1, "spock") == 0) {
            if (strcmp(o2, "tesoura") == 0 || strcmp(o2, "pedra") == 0) {
                g = 1;
            }
            if (strcmp(o2, "lagarto") == 0 || strcmp(o2, "papel") == 0) {
                g = 2;
            }
        }
        if (g == 0) {
            printf("empate\n");
        } else if (g == 1) {
            printf("rajesh\n");
        } else if (g == 2) {
            printf("sheldon\n");
        }
    }

    return 0;
}
