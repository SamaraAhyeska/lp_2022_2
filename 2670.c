#include<stdio.h>

int main() {
    int p1, p2, p3;
    scanf("%d %d %d", &p1, &p2, &p3);
    int a1 = p2 * 2 + p3 * 4;
    int a2 = p1 * 2 + p3 * 2;
    int a3 = p1 * 4 + p2 * 2;
    if (a1 <= a2 && a1 <= a3) {
        printf("%d\n", a1);
    } else if (a2 <= a1 && a2 <= a3) {
        printf("%d\n", a2);
    } else {
        printf("%d\n", a3);
    }
    return 0;
}
