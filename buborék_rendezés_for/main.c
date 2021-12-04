#include <stdio.h>
#include <stdlib.h>

int main() {
    int Tomb[] = {2, 11, 4, 8, -3, 11, 5, 11, 6, 7};
    int Hossz = sizeof(Tomb) / sizeof(Tomb[0]);
    int Seged;
    int Csere = 1;
    for (int i = 0; i < Hossz - 1 && Csere; i++) {
        Csere = 0;
        for (int j = 0; j < Hossz - 1 - i; j++) {
            // < csokkeno; > novekvo
            if (Tomb[j] > Tomb[j + 1]) {
                Seged = Tomb[j];
                Tomb[j] = Tomb[j + 1];
                Tomb[j + 1] = Seged;
                Csere = 1;
            }
        }
    }
    for (int i = 0; i <= Hossz - 1; i++) {
        printf("%d ", Tomb[i]);
    }
    return 0;
}
