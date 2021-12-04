#include <stdio.h>
#include <stdlib.h>

void f(int *x);

int main() {
    int szam;
    printf("szam= ");
    scanf("%d", &szam);
    f(&szam);
    printf("%d", szam);
    return 0;
}

void f(int *x) {
    (*x) *= 2;
}
