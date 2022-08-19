#include<stdio.h>

int main() {

    double a, b, r;
    char op;

    scanf("%lf%c%lf", &a, &op, &b);

    switch(op) {
        case '+':
            r = a + b;
            break;
        case '-':
            r = a - b;
            break;
        case '*':
            r = a * b;
            break;
        case '/':
            r = a / b;
            break;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", a, op, b, r);

    return 0;
}
