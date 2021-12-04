#include <stdio.h>
#include <stdlib.h>

int main() {
    int db = 0;
    int szam = 1;
    int oszto = 1;
    do {
        do {
            if (szam % oszto == 0) db += oszto;
            oszto++;
        } while (oszto <= szam);
        if (db > 2 * szam) {
            printf("%d ", szam);
        }
        szam++;
        db = 0;
        oszto = 1;
    } while (szam <= 100);
    return 0;
}
