#include<stdio.h>

int main() {
    double p, t = 0;
    int n, i, q, c;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &c, &q);
        switch(c) {
            case 1001:
                p = 1.50;
                break;
            case 1002:
                p = 2.50;
                break;
            case 1003:
                p = 3.50;
                break;
            case 1004:
                p = 4.50;
                break;
            case 1005:
                p = 5.50;
                break;
            default:
                p = 0;
        }
        t += (q * p);
    }
    printf("%.2lf\n", t);
    return 0;
}
