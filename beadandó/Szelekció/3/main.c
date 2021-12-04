#include <stdio.h>
#include <stdlib.h>

int main() {
    int szam, talalt = 0;
    char karakter;
    printf("karakter: ");
    scanf("%c", &karakter);
    do {
        printf("szam: ");
        scanf("%d", &szam);
        if (szam % 2 == 0) talalt = 1;
    } while (!talalt);
    printf("\nA beirt pozitiv szam: %d\n", szam);

    while (szam != 0) {
        printf("%c", karakter);
        szam--;
    }
    return 0;
}
