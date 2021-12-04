#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int v1, v2, v3, v4, v5;
    printf("Kerem a szamot ");
    scanf("%d", &x);
    v5 = x % 2;
    x = x / 2;
    v4 = x % 2;
    x = x / 2;
    v3 = x % 2;
    x = x / 2;
    v2 = x % 2;
    x = x / 2;
    v1 = x % 2;
    x = x / 2;
    printf("%d%d%d%d%d", v1, v2, v3, v4, v5);
    return 0;
}
