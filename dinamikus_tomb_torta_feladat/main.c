#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ma {
    float cukor;
    float vaj;
    char felirat[50];
};

typedef struct torta {
    float tomeg;
    int ar;
    char nev[30];
    struct ma maz;
} torta;

typedef torta *tortalista;

int osszertek(tortalista t, int m, torta *n);

int main() {
    char v;
    torta *p = malloc(0);
    printf("Uj torta?");
    v = getchar();
    int db = 0;
    while (v == 'i') {
        db++;
        p = realloc(p, db * sizeof(torta));
        printf("\ntomeg ar nev cukor vaj\n");
        scanf("%f %d %s %f %f", &(p[db - 1].tomeg), &(p[db - 1].ar), p[db - 1].nev, &(p[db - 1].maz.cukor),
              &(p[db - 1].maz.vaj));
        printf("felirat: ");
        gets(p[db - 1].maz.felirat);
        gets(p[db - 1].maz.felirat);

        printf("Uj torta?");
        v = getchar();
    }
    for (int i = 0; i < db; i++) {
        printf("%.1f %d %s %.1f %.1f %s\n", (p[db - 1].tomeg), (p[db - 1].ar), p[db - 1].nev, (p[db - 1].maz.cukor),
               (p[db - 1].maz.vaj), (p[db - 1].maz.felirat));

    }
    tortalista temp = malloc(sizeof(torta));
    printf("\nAz osszes erteke: %d", osszertek(p, db, temp));
    printf("\nA legnehezebb a(z) %s", temp->nev);
    return 0;
}

int osszertek(tortalista t, int m, torta *n) {
    int sum = 0;
    *n = *t;
    for (int i = 0; i < m; i++) {
        if (n->tomeg < t[i].tomeg) *n = t[i];
        sum += t[i].ar;
    }
    return sum;
}
