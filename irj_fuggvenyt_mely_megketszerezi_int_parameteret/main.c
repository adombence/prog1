#include <stdio.h>
#include <stdlib.h>

void ketszerezo(int *x);

int main() {
    int x = 3;
    ketszerezo(&x);
    printf("%d", x);
    return 0;
}

void ketszerezo(int *x) {
    *x = 2 * (*x);
}
