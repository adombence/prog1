#include <stdio.h>
#include <stdlib.h>

int duplazo(int *x1, int *y1, int *x2, int *y2);

int main() {
    int x1, y1, x2, y2;
    printf("x1: ");
    scanf("%d", &x1);
    printf("y1: ");
    scanf("%d", &y1);
    printf("x2: ");
    scanf("%d", &x2);
    printf("y2: ");
    scanf("%d", &y2);
    duplazo(&x1, &y1, &x2, &y2);
    printf("A vektor duplajanak koordianati: %d %d %d %d", x1, y1, x2, y2);
    return 0;
}

int duplazo(int *x1, int *y1, int *x2, int *y2) {
    *x2 *= 2;
    *y2 *= 2;
    return x2, y2;
}

