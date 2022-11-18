#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int n, i, j;
    scanf("%d%*c", &n);
    for (i = 0; i < n; i++) {
        char tmp[300];
        int v[30], m = 0;
        for (j = 0; j < 30; j++) v[j] = 0;
        scanf("%[^\n]%*c", tmp);
        for (j = 0; j < strlen(tmp); j++) {
            if (isupper(tmp[j])) {
                int x = tmp[j] - 65;
                v[x]++;
                if (v[x] > m) m = v[x];
            } else if (islower(tmp[j])) {
                int x = tmp[j] - 97;
                v[x]++;
                if (v[x] > m) m = v[x];
            }
        }
        for (j = 0; j < 30; j++) {
            if (v[j] == m) {
                printf("%c", j + 97);
            }
        }
        printf("\n");
    }
    return 0;
}
