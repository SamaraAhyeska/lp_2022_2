#include<stdio.h>

int main() {
    double a, b, c, media;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        media = ((a * 2) + (b * 3) + (c * 5)) / 10;
        printf("%.1lf\n", media);
    }
    return 0;
}
