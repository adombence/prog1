#include <stdio.h>
#include <stdlib.h>

int main() {
    int szam1, szam2, talalt = 0, szami;
    printf("szam1= ");
    scanf("%d", &szam1);
    printf("szam2= ");
    scanf("%d", &szam2);
    szami = szam1;
    do {
        if (szami % szam2 == 0) {
            talalt = 1;
        } else {
            szami += szam1;
        }
    } while (!talalt);
    printf("%d es %d elso kozos tobszorose %d", szam1, szam2, szami);
    return 0;
}
