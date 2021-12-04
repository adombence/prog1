#include <stdio.h>
#include <stdlib.h>

int novel(int x);

int main() {
    int szam;
    scanf("%d", &szam);
    printf("%d", novel(szam));
    return 0;
}

int novel(int x) {
    int a;
    a = x + 2;
    return a;
}
