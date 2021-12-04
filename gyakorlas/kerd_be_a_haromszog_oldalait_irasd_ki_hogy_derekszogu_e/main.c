#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("a: ");
    scanf("%d", &a);
    printf("b ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a > b && a > c) {
        if (b * b + c * c == a * a) {
            printf("derekszogu haromszog");
        } else {
            printf("nem derekszogu haromszog");
        }
    }
    if (b > a && b > c) {
        if (a * a + c * c == b * b) {
            printf("derekszogu haromszog");
        } else {
            printf("nem derekszogu haromszog");
        }
    }
    if (c > a && c > a) {
        if (b * b + a * a == c * c) {
            printf("derekszogu haromszog");
        } else {
            printf("nem derekszogu haromszog");
        }
    }
    if (a == b && b == c) printf("nem derekszogu haromszog");
    return 0;
}
