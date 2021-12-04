#include <stdio.h>
#include <stdlib.h>

//kerj be 0 vegjelig valos szamokat, majd irasd ki oket egy fajlba
int main() {
    FILE *f = fopen("out.txt", "w");
    int talalt = 0, db = 0;
    float szam;
    do {
        scanf("%f", &szam);
        fprintf(f, "%f\n", szam);
        if (szam == 0) talalt = 1;
    } while (!talalt);
    fclose(f);
    return 0;
}
