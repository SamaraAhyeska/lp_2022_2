#include<stdio.h>
#include<string.h>

int main() {

    char teste[20] = { "Texto Inicial" };
    char teste2[20];

    //teste2 = teste (n�o funciona)
    strcpy(teste2, teste);

    printf("%s\n", teste2);

    return 0;
}
