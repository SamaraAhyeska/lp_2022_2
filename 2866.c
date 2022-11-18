#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        char tmp[1000];
        scanf("%s", tmp);
        for (j = strlen(tmp) - 1; j >= 0; j--) {
            if (islower(tmp[j])) {
                printf("%c", tmp[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
