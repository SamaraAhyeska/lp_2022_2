#include<stdio.h>
#include<stdlib.h>

int main() {
    int n1, n2, res;
    char op;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite outro numero:\n");
    scanf("%d", &n2);
    fflush(stdin);
    printf("Digite a operacao a ser realizada:\n");
    scanf("%c", &op);
    switch (op) {
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            if (n2 == 0) {
                printf("Impossivel dividir por zero\n");
                return 0;
            }
            res = n1 / n2;
            break;
        default:
            printf("Operacao invalida\n");
            return 0;
    }
    printf("%d %c %d = %d\n", n1, op, n2, res);
    return 0;
}




