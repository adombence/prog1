#include <stdio.h>
#include <stdlib.h>

int main() {
    //NINCS KESZ!
    int i, j, fele, db;
    for (i = 1; i <= 100; i++) {
        //Ha paratlan, akkor nem lehet prim a fele, igy azt egybol ki lehet irni
        if (i % 2 == 1) {
            printf("%d\n", i);
        } else {
            db = 0;
            fele = i / 2;
            for (j = 1; j <= fele; j++) {
                if (fele % j == 0) db++;
            }
            if (db != 2) printf("%d\n", i);
        }
    }
    return 0;
}
