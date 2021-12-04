#include <stdio.h>
#include <stdlib.h>

//nincs kesz
int main() {
    int Tomb[] = {2, 11, 4, 8, -3, 11, 5, 11, 6, 7};
    int Hossz = sizeof(Tomb) / sizeof(Tomb[0]);
    int Seged;
    int Csere = 1;
    int i = 0;
    while (!Csere) {
        i = 0;
        while (i != Hossz - 1) {
            // < csokkeno; > novekvo
            if (Tomb[i] > Tomb[i + 1]) {
                Seged = Tomb[i];
                Tomb[i] = Tomb[i + 1];
                Tomb[i + 1] = Tomb[i];
                Csere = 1;
            }
            i++;
        }
    }
    while (i != Hossz) {
        printf("%d ", Tomb[i]);
        i++;
    }
    return 0;
}
