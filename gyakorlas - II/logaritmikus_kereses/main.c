#include <stdio.h>
#include <stdlib.h>

//A tombben levo helyet adja vissza
int binarisKereses(int kulcs, int a[], int m);

int main() {
    int Tomb[] = {1, 6, 12, 14, 20, 32, 46, 54, 61};
    int Meret = sizeof(Tomb) / sizeof(Tomb[0]), m, n = 0;
    int Szam;
    int Seged;
    int Talalt = 0;
    printf("Keresett szam: ");
    scanf("%d", &Szam);
    printf("%d", binarisKereses(Szam, Tomb, Meret));
    return 0;
}

int binarisKereses(int kulcs, int a[], int m) {
    int E = 0;
    int U = m - 1;
    while (E <= U) {
        int K = E + (U - E) / 2;
        if (kulcs < a[K]) U = K - 1;
        else if (kulcs > a[K]) E = K + 1;
        else return K;
    }
    return -1;
}
