#include<stdio.h>

int main() {

    int n, i, j, a1, m1, d1, a2, m2, d2;
    int diasDoMes[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%d-%d-%d %d-%d-%d", &a1, &m1, &d1, &a2, &m2, &d2);

        int qtdDias1 = d1, qtdDias2 = d2;

        for (j = 1; j < m1; j++) {
            qtdDias1 += diasDoMes[j];
        }

        for (j = 1; j < m2; j++) {
            qtdDias2 += diasDoMes[j];
        }

        if (a1 % 400 == 0 || (a1 % 4 == 0 && a1 % 100 != 0)) {
            if (m1 > 2) {
                qtdDias1++;
            }
        }

        if (a2 % 400 == 0 || (a2 % 4 == 0 && a2 % 100 != 0)) {
            if (m2 > 2) {
                qtdDias2++;
            }
        }

        if (a1 < a2) {

            if (a1 % 400 == 0 || (a1 % 4 == 0 && a1 % 100 != 0)) {
                qtdDias1 = 366 - qtdDias1;
            } else {
                qtdDias1 = 365 - qtdDias1;
            }

            for (j = a1 + 1; j < a2; j++) {

                if (j % 400 == 0 || (j % 4 == 0 && j % 100 != 0)) {
                    qtdDias1 += 366;
                } else {
                    qtdDias1 += 365;
                }

            }

            qtdDias1 += qtdDias2;

            printf("%d\n", qtdDias1);

        } else if (a2 < a1) {

             if (a2 % 400 == 0 || (a2 % 4 == 0 && a2 % 100 != 0)) {
                qtdDias2 = 366 - qtdDias2;
            } else {
                qtdDias2 = 365 - qtdDias2;
            }

            for (j = a2 + 1; j < a1; j++) {

                if (j % 400 == 0 || (j % 4 == 0 && j % 100 != 0)) {
                    qtdDias2 += 366;
                } else {
                    qtdDias2 += 365;
                }

            }

            qtdDias2 += qtdDias1;

            printf("%d\n", qtdDias2);

        } else { // estão no mesmo ano

            if (m1 < m2) {

                printf("%d\n", qtdDias2 - qtdDias1);

            } else if (m2 < m1) {

                printf("%d\n", qtdDias1 - qtdDias2);

            } else { // estão no mesmo mês e ano

                if (d1 < d2) {
                    printf("%d\n", d2 - d1);
                } else if (d2 < d1) {
                    printf("%d\n", d1 - d2);
                } else {
                    printf("0\n");
                }

            }
        }

    }

    return 0;
}
