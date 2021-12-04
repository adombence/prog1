#include <stdio.h>
#include <stdlib.h>

int main() {
    int Tomb1[] = {2, 11, 4, 8, -3, 11, 5, 11, 6, 7};
    int Hossz = sizeof(Tomb1) / sizeof(Tomb1[0]);
    int Seged, j;
    int Tomb2[Hossz];
    Tomb2[0] = Tomb1[0];

    for (int i = 1; i < Hossz; i++) {
        Seged = Tomb1[i];
        j = i - 1;
        while (j >= 0 && Seged < Tomb2[j]) {
            Tomb2[j + 1] = Tomb2[j];
            j--;
        }
        Tomb2[j + 1] = Seged;
    }

    for (int i = 0; i < Hossz; i++) {
        printf("%d ", Tomb2[i]);
    }
    return 0;
}
