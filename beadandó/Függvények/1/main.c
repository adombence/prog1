#include <stdio.h>
#include <stdlib.h>

int duplazo(int *szam);

int main() {
    int a = 4;
    printf("a: %d", a);
    duplazo(&a);
    printf("\nduplazo(a): %d", a);
    return 0;
}

int duplazo(int *szam) {
    *szam *= 2;
    return szam;
}
