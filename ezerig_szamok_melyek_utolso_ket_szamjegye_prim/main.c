#include <stdio.h>
#include <stdlib.h>

int main() {
    int szam;
    int szam_;
    int db;
    printf("\t");
    for (szam = 1; szam < 1001; szam++) {
        szam_ = szam % 100;
        db = 0;
        for (int i = 1; i <= szam_; i++) {
            if (szam_ % i == 0) {
                db++;
            }
        }
        if (db == 2)printf("%d\t", szam);
    }
    return 0;
}
