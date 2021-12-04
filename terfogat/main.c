#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    printf("c= ");
    scanf("%f", &c);
    printf("terfogat: %f\n", a * b * c);
    printf("felszin: %f\n", 2 * (a * b + b * c + a * c));
    return 0;
}
