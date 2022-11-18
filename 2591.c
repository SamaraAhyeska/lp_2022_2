#include<stdio.h>
#include<string.h>

int main() {
    int i, n, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        char tmp[300];
        int x = 0, y = 0;
        scanf("%s", tmp);
        for (j = 1; tmp[j] == 'a'; j++, x++);
        for (j = j + 3; tmp[j] == 'a'; j++, y++);
        printf("k");
        for (j = 0; j < (x * y); j++) {
            printf("a");
        }
        printf("\n");
    }

    return 0;
}
