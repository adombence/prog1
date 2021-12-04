#include <stdio.h>
#include <stdlib.h>

int main() {
    int oszto, osztok = 0;
    for (int i = 0; i <= 100; i++) {
        oszto = 0;
        osztok = 0;
        while (oszto <= i) {
            if (i % oszto == 0) osztok += oszto;
            oszto++;
        }
        if (osztok > 2 * i) printf(" %d\t", i);
    }
    return 0;
}
