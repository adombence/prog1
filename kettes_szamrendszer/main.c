#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Kerem a szamot ");
    scanf("%d", &x);
    printf("%d", x / 16);
    x = x % 16;
    printf("%d", x / 8);
    x = x % 8;
    printf("%d", x / 4);
    x = x % 4;
    printf("%d", x / 2);
    printf("%d", x % 2);
    return 0;
}
