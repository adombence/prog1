#include <stdio.h>
#include <stdlib.h>

void haromszog(int a, char b);

int main() {
    int szam;
    char karakter;
    printf("karakter: ");
    scanf("%c", &karakter);
    printf("szam: ");
    scanf("%d", &szam);
    haromszog(szam, karakter);
    return 0;
}

void haromszog(int a, char b) {
    while (a != 0) {
        kiiro(a, b);
        printf("\n");
        a--;
    }
}

void kiiro(int a, char b) {
    while (a != 0) {
        printf("%c", b);
        a--;
    }
}
