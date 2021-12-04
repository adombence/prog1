#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("\na=%d", a);
    printf("\nb=%d", b);

    return 0;
}
