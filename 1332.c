#include<stdio.h>
#include<string.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int r = 0;
        char tmp[10];
        scanf("%s", tmp);
        if (strlen(tmp) == 5) {
            r = 3;
        } else {
            if (tmp[0] == 'o' && tmp[1] == 'n') {
                r = 1;
            } else if (tmp[0] == 'o' && tmp[2] == 'e') {
                r = 1;
            } else if (tmp[1] == 'n' && tmp[2] == 'e') {
                r = 1;
            } else if (tmp[0] == 't' && tmp[1] == 'w') {
                r = 2;
            } else if (tmp[0] == 't' && tmp[2] == 'o') {
                r = 2;
            } else if (tmp[1] == 'w' && tmp[2] == 'o') {
                r = 2;
            }
        }
        printf("%d\n", r);
    }
    return 0;
}
