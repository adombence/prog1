#include <stdio.h>
#include <stdlib.h>

int main() {
    //kozos oszto eukledeszi algoritmussal es a legkisebb kozos tobbszoros az oszto ismereteben
    int szam1, szam2, talalt = 0;
    printf("szam1= ");
    scanf("%d", &szam1);
    printf("szam2= ");
    scanf("%d", &szam2);
    int szam1i = szam1;
    int szam2i = szam2;
    do {
        if (szam1i > szam2i) {
            szam1i = szam1i - szam2i;
        }
        if (szam1i < szam2i) {
            szam2i = szam2i - szam1i;
        }
    } while (szam1 == szam2);
    printf("kozos oszto: %d\nkozos tobbszoros: %d", szam2i, (szam1 * szam2) / szam2i);
    return 0;
}
