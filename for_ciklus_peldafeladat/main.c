#include <stdio.h>
#include <stdlib.h>

int main() {
    int db;
    char karakter;
    printf("kerem a szamot: ");
    scanf("%d", &db);
    printf("kerem a karaktert: ");
    scanf("%c", &karakter);
    scanf("%c", &karakter);
    printf("\n");
    int sor = db;
    for (int i = 0; i < sor; i++) {
        for (int j = 0; j < db; j++) {
            printf("%c", karakter);
        }
        printf("\n");
        db--;
    }
    return 0;
}
