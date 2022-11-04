#include<stdio.h>
#include<string.h>
//https://cplusplus.com/reference/cstring/
#include<ctype.h>
//https://cplusplus.com/reference/cctype/

int main() {
    char opcao[100];
    int i;

    do {

        scanf("%s", opcao);

        for (i = 0; i < strlen(opcao); i++) {
            opcao[i] = tolower(opcao[i]);
        }

    } while (strcmp(opcao, "sim") == 0);


    return 0;
}
