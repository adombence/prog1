#include <stdio.h>
#include <stdlib.h>

/* Irjon fuggvenyt, mely visszaadja ket
int tipusu parameterenek legnagyobb kozososztojat*/
int LegnagyobbKozosOszto(int a, int b);

int main() {
    int szam1, szam2;
    printf("szam1: ");
    scanf("%d", &szam1);
    printf("szam2: ");
    scanf("%d", &szam2);
    printf("\nLegnagyobb kozos oszto: %d", LegnagyobbKozosOszto(szam1, szam2));
    return 0;
}

int LegnagyobbKozosOszto(int a, int b) {

    int szam1i = a;
    int szam2i = b;
    do {
        if (szam1i > szam2i) {
            szam1i = szam1i - szam2i;
        }
        if (szam1i < szam2i) {
            szam2i = szam2i - szam1i;
        }
    } while (a == b);

    return szam2i;
}
