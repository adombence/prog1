#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nev[30];
    int kor;
} sor;

void nevrendezes(sor *x, int meret);

int korkeres(sor *x, int meret, int k);


int main() {
    sor t[5];
    srand(23);
    /*strcpy(t[0].nev,"Anna");t[0].kor=13;
    strcpy(t[1].nev,"Kanna");t[1].kor=3;
    strcpy(t[2].nev,"Annabell");t[2].kor=17;
    strcpy(t[3].nev,"Annamaria");t[3].kor=11;*/
    for (int i = 0; i < 5; i++) {
        gets(t[i].nev);
        t[i].kor = rand() % 95 + 18;
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%s %d\n", t[i].nev, t[i].kor);
    }
    printf("\n\n");
    int Hossz = sizeof(t) / sizeof(t[0]);
    nevrendezes(t, Hossz);
    int keresett;
    printf("\nkeresett: ");
    scanf("%d", &keresett);
    int index = korkeres(t, Hossz, keresett);
    printf("\n%d", korkeres(t, Hossz, keresett));
    if (index == -1) {
        printf("\tnincs ilyen!");
    } else {
        printf("\n%s", t[index].nev);
    }
    return 0;
}

void nevrendezes(sor *x, int meret) {
    sor Seged;
    for (int i = 0; i < meret - 1; i++) {
        for (int j = 0; j < meret - 1; j++) {
            if (x[j].kor > x[j + 1].kor) {
                Seged = x[j];
                x[j] = x[j + 1];
                x[j + 1] = Seged;
            }
        }
    }
    printf("rendezett:\n");
    for (int i = 0; i < meret; i++) {
        printf("%s %d\n", x[i].nev, x[i].kor);
    }
}

int korkeres(sor *x, int meret, int k) {
    int i = 0;
    while (x[i].kor < k && i < meret) i++;
    if (x[i].kor == k) return i;
    else return -1;
}
