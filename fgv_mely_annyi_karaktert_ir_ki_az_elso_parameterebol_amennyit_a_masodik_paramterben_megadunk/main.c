#include <stdio.h>
#include <stdlib.h>

void kiiro(char c, int db);

int main() {
    char karakter;
    int szam;
    printf("karakter: ");
    scanf("%c", &karakter);
    printf("szam: ");
    scanf("%d", &szam);
    kiiro(karakter, szam);
    return 0;
}

void kiiro(char c, int db) {
    while (db != 0) {
        printf("%c", c);
        db--;
    }
}
