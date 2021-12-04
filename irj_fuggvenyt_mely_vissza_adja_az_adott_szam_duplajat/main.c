#include <stdio.h>
#include <stdlib.h>

double dupla(double x);

int main() {
    double szam;
    scanf("%d", &szam);
    printf("%d", dupla(szam));
    return 0;
}

double dupla(double x) {
    double i;
    i = 2 * x;
    return i;
}
