#include <stdio.h>
#include <stdlib.h>

void kiiro(char c, int a);

int main() {
    int szam;
    char karakter;
    printf("karakter: ");
    scanf("%c", &karakter);
    printf("szam= ");
    scanf("%d", &szam);
    kiiro(karakter, szam);
    return 0;
}

void kiiro(char c, int a) {
    while (a != 0) {
        printf("%c", c);
        a--;
    }
}
