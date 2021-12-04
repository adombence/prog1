#include <stdio.h>
#include <stdlib.h>

int main() {
    //1. feladat
    /*kerjen be addig egesz szamokat amig nem gepel olyan szamot ami kisebb,
      mint az elotte begepelt szam, s irassa ki, hogy hanyadik volt az utoljara begepelt szam*/
    int szam, elozo, db = 1, talalt = 0;
    do {
        scanf("%d", &szam);
        if (szam < elozo && db != 1) {
            talalt = 1;
        } else {
            db++;
            elozo = szam;
        }
    } while (!talalt);
    printf("\nA %d. szam volt az utolso", db);
    return 0;
}
