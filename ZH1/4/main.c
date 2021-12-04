#include <stdio.h>
#include <stdlib.h>

int main() {
    //4. feladat
    //kerjen be egy szoveget (sztringet), amjd irassa ki, hogy hanyszor fordul benne elo a legtobbszor
    //elofordulo karakter

    char sz[99];
    char k, k_;
    int db = 0, db_ = 0;
    scanf("%s", sz);
    //printf("%s\n",sz);
    int hossz = 0;
    while (sz[hossz] != '\0')hossz++;
    for (int i = 0; i <= hossz - 1; i++) {
        printf("%c", sz[i]);
    }
    for (int i = 0; i <= hossz - 1; i++) {
        db_ = 0;
        k_ = sz[i];
        for (int j = 0; j <= hossz - 1; j++) {
            if (k_ == sz[j])db_++;
        }
        if (db < db_) {
            db = db_;
            k = k_;
        }
    }
    printf("\n%c karakter %d-szer szerepelt", k, db);
    return 0;
}
