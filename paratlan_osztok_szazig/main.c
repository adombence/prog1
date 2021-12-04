#include <stdio.h>
#include <stdlib.h>

int main() {
    int db = 0;
    int szam;
    int oszto;
    for (szam = 1; szam < 101; szam++) {
        for (oszto = 1; oszto <= szam; oszto++) {
            if (szam % oszto == 0) db++;
        }
        if (db % 2 == 1) {
            printf("%d ", szam);
            db = 0;
        }
    }
    return 0;
}
