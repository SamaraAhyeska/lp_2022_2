#include<stdio.h>

int main() {

    char nome[100];

    //leitura normal
    //scanf("%s", nome);

    //leitura até o enter
    scanf("%[^\n]%*c", nome);

    //https://cplusplus.com/reference/cstdio/scanf/

    printf("%s\n", nome);
    return 0;
}
