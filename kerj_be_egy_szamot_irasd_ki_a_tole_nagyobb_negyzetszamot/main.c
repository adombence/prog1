#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int szam;
    int negyzetszam;
    int oszto;
    printf("szam= ");
    scanf("%d", &negyzetszam);
    int negyzetszam_e = 0;
    szam = negyzetszam;
    do {
        negyzetszam++;
        for (oszto = 1; (oszto <= negyzetszam) && !negyzetszam_e; oszto++) {
            if (oszto * oszto == negyzetszam) negyzetszam_e = 1;
        }
    } while (!negyzetszam_e);
    printf("A %d szam utan az elso negyzet szam %d, mert %d*%d=%d", szam, negyzetszam, oszto - 1, oszto - 1,
           negyzetszam);
    return 0;
}
