#include<stdio.h>
#include<string.h>

int main() {

    int i, j, k, m = 0;
    char tmp[1000] = { "" };
    char maior[1000];

    while (strcmp(tmp, "0") != 0) {

        scanf("%[^\n]%*c", tmp);

        if (strcmp(tmp, "0") != 0) {

            int l = 0;

            for (i = 0; i < strlen(tmp); i++) {
                if (tmp[i] != ' ') {
                    l++;
                } else {
                    printf("%d-", l);
                    if (l >= m) {
                        for (j = i - l, k = 0; j < i; j++, k++) {
                            maior[k] = tmp[j];
                        }
                        maior[k] = '\0';
                        m = l;
                    }
                    l = 0;
                }
            }
            if (l >= m) {
                for (j = i - l, k = 0; j < i; j++, k++) {
                    maior[k] = tmp[j];
                }
                maior[k] = '\0';
                m = l;
            }
            printf("%d\n", l);
        }

    }
    printf("\nThe biggest word: %s\n", maior);

    return 0;
}
