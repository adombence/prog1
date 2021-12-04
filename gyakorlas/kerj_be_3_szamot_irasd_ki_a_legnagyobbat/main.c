#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    int b1;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    printf("\na= %d b= %d c= %d\n", a, b, c);
    printf("if-el: ");
    if (a > b && a > c) {
        printf("%d", a);
    } else if (b > a && b > c) {
        printf("%d", b);
    } else {
        printf("%d", c);
    }
    printf("\nif nelkul: ");
    (a > b ? printf("%d", a) : b > c ? printf("%d", b) : printf("%d", c));
    return 0;
}
