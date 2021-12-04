#include <stdio.h>
#include <stdlib.h>

void osszeg(int *t, int *sum, int elemszam);

void min(int *t, int *mini, int elemszam);

int max(int *t, int elemszam, int *Index, int *IndexDarab);

int main() {
    int tomb[] = {11, 2, 3, 11, 5, 6, 7, 8, 9, 11};
    int ossz = 0, minimum, maximum, darab;
    int h = sizeof(tomb) / sizeof(tomb[0]);
    int b[h];
    osszeg(tomb, &ossz, h);
    min(tomb, &minimum, h);
    printf("\nosszeg: %d", ossz);
    printf("\nminimum: %d", minimum);
    printf("\nmaximum: %d\n", max(tomb, h, b, &darab));
    for (int i = 0; i < darab; i++)
        printf("t[%d]: %d\n", b[i], max(tomb, h, b, &darab));
    return 0;
}

void osszeg(int *t, int *sum, int elemszam) {
    for (int i = 0; i <= elemszam - 1; i++) {
        *sum = *sum + t[i];
    }
}

void min(int *t, int *mini, int elemszam) {
    *mini = t[0];
    for (int i = 0; i <= elemszam - 1; i++) {
        if (*mini > t[i]) {
            *mini = t[i];
        }
    }
}

int max(int *t, int elemszam, int *Index, int *IndexDarab) {
    int maxi = t[0];
    for (int i = 0; i <= elemszam - 1; i++) {
        if (maxi < t[i]) {
            maxi = t[i];
        }
    }
    *IndexDarab = 0;
    for (int i = 0; i <= elemszam - 1; i++) {
        if (maxi == t[i]) {
            Index[*IndexDarab] = i;
            (*IndexDarab)++;
        }
    }
    return maxi;
}
