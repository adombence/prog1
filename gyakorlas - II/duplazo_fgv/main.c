#include <stdio.h>
#include <stdlib.h>

int f(int a);

int main() {
    int szam;
    printf("szam= ");
    scanf("%d", &szam);
    printf("%d", f(szam));
    return 0;
}

int f(int a) {
    a *= 2;
    return a;
}
