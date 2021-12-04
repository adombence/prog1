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
    struct torta *kov;
} torta;

typedef torta *tortalista;

int osszertek(tortalista t, torta *n);

int main() {
    char v;
    tortalista fej = 0, uj, utolso;
    printf("Uj torta?");
    v = getchar();
    while (v == 'i') {
        uj = malloc(sizeof(torta));
        printf("\ntomeg ar nev cukor vaj\n");
        scanf("%f %d %s %f %f", &(uj->tomeg), &(uj->ar), uj->nev, &(uj->maz.cukor), &(uj->maz.vaj));
        printf("felirat: ");
        gets(uj->maz.felirat);
        gets(uj->maz.felirat);

        uj->kov = NULL;

        if (fej)
            utolso->kov = uj;
        else fej = uj;
        utolso = uj;

        printf("Uj torta?");
        v = getchar();
    }
    uj = fej;
    while (uj) {
        printf("%.1f %d %s %.1f %.1f %s\n", (uj->tomeg), (uj->ar), uj->nev, (uj->maz.cukor), (uj->maz.vaj),
               (uj->maz.felirat));
        uj = uj->kov;
    }
    tortalista temp = malloc(sizeof(torta));
    printf("\nAz osszes erteke: %d", osszertek(fej, temp));
    printf("\nA legnehezebb a(z) %s", temp->nev);
    return 0;
}

int osszertek(tortalista t, torta *n) {
    int sum = 0;
    *n = *t;
    while (t) {
        if (n->tomeg < t->tomeg) *n = *t;
        sum += t->ar;
        t = t->kov;
    }
    return sum;
}
