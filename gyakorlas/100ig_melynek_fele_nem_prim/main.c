#include <stdio.h>
#include <stdlib.h>

int main() {
    float fele, x;
    int db;
    for (int i = 1; i <= 100; i++) {
        db = 0;
        x = 1;
        fele = (float) i / 2;
        while (x <= fele) {
            if ((int) fele % (int) x == 0) db++;
            x++;
        }
        if (db != 2)printf("%d\tfele: %.1f\n", i, fele);
    }
    return 0;
}
