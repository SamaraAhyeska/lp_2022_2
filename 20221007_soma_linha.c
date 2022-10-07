#include<stdio.h>

int main() {
    int m[4][4];
    int i, j, s;
    for (i = 0, s = 0; i < 4; i++, s = 0) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
            s += m[i][j];
        }
        printf("%d\n", s);
    }
    return 0;
}
