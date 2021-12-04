#include <stdio.h>
#include <stdlib.h>

int main() {

    int szam, talalt = 0;
    do {
        scanf("%d", &szam);
        if (szam % 2 == 0) talalt = 1;
    } while (!talalt);
    printf("\nA beirt pozitiv szam: %d", szam);
    return 0;
}
