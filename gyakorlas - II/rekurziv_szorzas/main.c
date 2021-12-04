#include <stdio.h>
#include <stdlib.h>

int szoroz(int a, int b);

int main() {
    int szam1;
    int szam2;
    printf("szam1: ");
    scanf("%d", &szam1);
    printf("szam2: ");
    scanf("%d", &szam2);
    printf("%d", szoroz(szam1, szam2));
    return 0;
}

int szoroz(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return szoroz(a, b - 1) + a;
    }

}
