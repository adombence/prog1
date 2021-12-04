#include <stdio.h>
#include <stdlib.h>

int main() {
    int szam, negyzetszam, oszto = 1;
    printf("kerek egy szamot: ");
    int negyzetszam_e = 1;
    scanf("%d", &szam);
    do {
        negyzetszam = szam;
        negyzetszam++;
        while (oszto <= negyzetszam) {
            oszto++;
            if (oszto * oszto == negyzetszam) negyzetszam_e = 1;
        }
    } while (negyzetszam_e == 0);
    printf("A %d szam utan az elso negyzet szam %d, mert %d*%d=%d", szam, negyzetszam, oszto, oszto, negyzetszam);
    return 0;
}
