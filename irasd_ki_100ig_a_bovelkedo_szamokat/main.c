#include <stdio.h>
#include <stdlib.h>

int main() {
    int oszto, x;
    for (int i = 0; i <= 100; i++) {
        oszto = 0;
        while (x < i) {
            if (i % x == 0) {
                printf("%d\t", x);
                oszto = oszto + x;
            }
            if (oszto > i) printf("%d ", i);
        }
    }
    return 0;
}
