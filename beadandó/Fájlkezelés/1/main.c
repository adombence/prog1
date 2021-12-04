#include <stdio.h>
#include <stdlib.h>

/*keszits programot, ami egy letezo szoveges fajl tartalmat ugy irja ki,
    a kepernyore, hogy a sorok ele odairja a sorszamot is!*/
int main() {
    FILE *f = fopen("in.txt", "r");
    char sz[100];
    int db = 0;
    while (!feof(f)) {
        db++;
        fgets(sz, 100, f);
        printf("%d.\t%s", db, sz);
    }
    return 0;
}
