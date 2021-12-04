#include <stdio.h>
#include <stdlib.h>

int main() {
    int db, ar;
    char ital;
    //printf("Hany darabot ker? ");
    scanf("%d", &db);
    //printf("Mit ker? ");
    scanf("%c", &ital);
    scanf("%c", &ital);
    switch (ital) {
        case 's':
            ar = db * 300;
            break;
        case 'b':
            ar = db * 400;
            break;
        case 'p':
            ar = db * 500;
            break;
        case 'f':
            ar = db * 250;
            break;
        default:
            ar = -1;
    }
    printf(ar == -1 ? "Rossz rendeles" : "Az ar: %d", db);
    return 0;
}
