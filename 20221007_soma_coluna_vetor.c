#include<stdio.h>

int main() {

    int m[4][4];
    int s[4];
    int i, j;

    for (j = 0; j < 4; j++) s[j] = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
            s[j] += m[i][j];
        }
    }

    for (j = 0; j < 4; j++) printf("%d\n", s[j]);

    return 0;
}
