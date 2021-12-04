#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, db;
    for (int i = 0; i <= 100; i++) {
        db = 0;
        x = 1;
        while (x <= i) {
            if (i % x == 0) db++;
            x++;
        }
        if (db % 2 == 1) printf("%d\t%d\n", i, db);
    }
    return 0;
}
