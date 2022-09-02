#include<stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (n2 >= 0 && n2 <= 2) {
        printf("nova\n");
    } else if (n2 >= 97 && n2 <= 100) {
        printf("cheia\n");
    } else if (n2 > n1) {
        printf("crescente\n");
    } else {
        printf("minguante\n");
    }
    return 0;
}
