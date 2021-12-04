#include <stdio.h>
#include <stdlib.h>

int main() {
    //3. feladat
    //adjon meg egy, az angol abc karaktereibol allo 3 soros 5 oszlopos tombot,
    //majd irasse ki, hogy hany soraban tobb a kisbetuk szama mint 3
    char tomb[3][5] = {{'a', 'b', 'c', 'd', 'e'},
                       {'F', 'g', 'h', 'i', 'J'},
                       {'K', 'L', 'm', 'n', 'o'}};

    int db = 0, db_sor = 0, db_ = 0;
    for (int i = 0; i < 3; i++) {
        db = 0;
        for (int j = 0; j < 5; j++) {
            printf("%c ", tomb[i][j]);
            if (tomb[i][j] >= 'a' && tomb[i][j] <= 'z') db++;
        }
        if (db > 3)db_sor++;
        db_ += db;
        printf("\n");
    }
    printf("\n%d db kisbetu volt.", db_);
    printf("\n%d sorban volt tobb kisbetu mint 3", db_sor);
    return 0;
}
