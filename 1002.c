#include<stdio.h>
#include<math.h>
int main() {
    double r, pi = 3.14159, area;
    scanf("%lf", &r);
    area = pi * pow(r, 2); // Potência
    // sqrt(n) - Raiz Quadrada
    printf("A=%.4lf\n", area);
    return 0;
}
