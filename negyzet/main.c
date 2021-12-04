#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("a= ");
    scanf("%d\n", &a);
    printf("b= ");
    scanf("%d\n", &b);
    printf("kerulet=%d\n", 2 * (a + b));
    printf("terulet=%d\n", a * b);
    return 0;
}
