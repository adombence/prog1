#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *g = fopen("felhasznalo.txt", "r");
    int db = 0;
    char nev[100];
    while (db != 2) {
        fgets(nev, 100, g);
        puts(nev);
        db++;
    }
    fclose(g);
    return 0;
}
