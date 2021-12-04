#include <stdio.h>
#include <stdlib.h>

//nincs kesz!
int main() {
    int Tomb[] = {1, 6, 12, 14, 20, 32, 46, 54, 61};
    int Meret = sizeof(Tomb) / sizeof(Tomb[0]), m, n = 0;
    int Szam;
    int Seged;
    int Talalt = 1;
    printf("Keresett szam: ");
    scanf("%d", &Szam);
    while (Talalt != 0) {
        Seged = Meret / 2;

        for (int j = n; j < Meret / 2; j++) {
            if (j == Meret / 2) m = j;
        }
        if (Seged < Meret / 2) {
            n = 0;
        } else if (Seged > Meret / 2) {
            n = m;
        } else if (Seged == Szam) {
            Talalt = 0;
        }
    }
    printf("%d", Seged);
    return 0;
}
