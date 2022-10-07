#include<stdio.h>

int main() {
    int m[4][4];
    int i, j, s;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (j = 0, s = 0; j < 4; j++, s = 0) {
        for (i = 0; i < 4; i++) {
            s += m[i][j];
        }
        printf("%d\n", s);
    }
    return 0;
}
