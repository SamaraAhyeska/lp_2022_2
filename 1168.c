#include<stdio.h>
#include<string.h>

int main() {

    int l[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
    int n, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        int q = 0;
        char tmp[1000];
        scanf("%s", tmp);

        for (j = 0; j < strlen(tmp); j++) {
            //printf("%c %d\n", tmp[j], tmp[j] - 48);
            q += l[(tmp[j] - 48)];
        }

        printf("%d leds\n", q);
    }

    return 0;
}
