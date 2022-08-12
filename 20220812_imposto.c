#include<stdio.h>

int main() {
    double salario, imposto;
    scanf("%lf", &salario);
    imposto = (salario >= 5000) ? salario * 0.2 : salario * 0.1;
    printf("%.2lf\n", imposto);
    return 0;
}
