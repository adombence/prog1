#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("Kerulet: %d", 2 * (a + b));
    printf("\nTerulet: %d", a * b);
    return 0;
}
