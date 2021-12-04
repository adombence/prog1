#include <stdio.h>
#include <stdlib.h>

hatv(int a, int b);

int main() {
    int szam1;
    int szam2;
    printf("szam1: ");
    scanf("%d", &szam1);
    printf("szam2: ");
    scanf("%d", &szam2);
    printf("%d", hatv(szam1, szam2));
    return 0;
}

hatv(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return hatv(a, b - 1) * a;
    }
}
