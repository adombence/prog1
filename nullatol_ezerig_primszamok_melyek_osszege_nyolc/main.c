#include <stdio.h>
#include <stdlib.h>

int main() {
    int szj, db, x, x_;
    int i;
    for (int x = 1; x < 1000; x++) {
        db = 0;
        i = 1;
        szj = 0;
        /*Prim szam meghatarozasa*/
        while (i <= x) {
            if (x % i == 0) {
                db++;
            }
            /*szamjegyek osszege 8*/
            x_ = x;
            szj = x_ % 10;
            x_ /= 10;
            szj += x_ % 10;
            szj += x_ / 10;
            /*szamjegyek osszege8 END*/
            i++;
        }
        /*prim, ha csak ketto osztoja van*/
        if (db == 2 && szj == 8) {
            printf("%d\n", x);
        }
    }
    return 0;
}
