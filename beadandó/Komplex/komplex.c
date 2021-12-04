#include <stdio.h>
#include <math.h>
#include "string.h"

#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5

typedef struct {
    int futar;
    int nap;
    int pizza[6];
    int bevetel;
} Sor;

int main() {

    int sorok = 0, i, space, j, nov;
    Sor l[1000];
    char s[25];
    FILE *f = fopen("in.txt", "r");
    while (!feof(f)) {
        fgets(s, 25, f);
        printf("%s", s);

        sscanf(s, "%d %d", &l[sorok].futar, &l[sorok].nap);

        printf("\n\nfutar: %d, nap: %d\n", l[sorok].futar, l[sorok].nap);

        l[sorok].bevetel = 0;
        for (i = 0; i < strlen(s); i++) {
            if (s[i] == ' ' && space < 2) {
                space++;
            } else {
                if (s[i] >= '0' && s[i] <= '9') {
                    nov = s[i] - 48;
                    //printf("nov: %d\n", nov);
                } else if (s[i] >= 'A' && s[i] <= 'F') {
                    switch (s[i]) {
                        case 'A': {
                            l[sorok].pizza[A] = nov;
                            l[sorok].bevetel += 1000 * nov;
                            break;
                        }
                        case 'B': {
                            l[sorok].pizza[B] = nov;
                            l[sorok].bevetel += 1100 * nov;
                            break;
                        }
                        case 'C': {
                            l[sorok].pizza[C] = nov;
                            l[sorok].bevetel += 1200 * nov;
                            break;
                        }
                        case 'D': {
                            l[sorok].pizza[D] = nov;
                            l[sorok].bevetel += 1300 * nov;
                            break;
                        }
                        case 'E': {
                            l[sorok].pizza[E] = nov;
                            l[sorok].bevetel += 1400 * nov;
                            break;
                        }
                        case 'F': {
                            l[sorok].pizza[F] = nov;
                            l[sorok].bevetel += 1500 * nov;
                            break;
                        }
                    }
                }
            }
        }

        for (j = 0; j < 6; j++) printf("%d, ", l[sorok].pizza[j]);

        sorok++;
        printf("\n\n--\n");
    }

    i = 0;
    Sor r;
    while (i < sorok) {
        if (l[i].bevetel < l[i + 1].bevetel) {
            r = l[i];
            l[i] = l[i + 1];
            l[i + 1] = r;
            i = 0;
        } else i++;
    }
    for (i = 0; i < sorok; i++) printf("%d -- %d %d\n", l[i].bevetel, l[i].futar, l[i].nap);

    int futarok[10], napok[30];

    char leg_betu;
    int leg_db = 0, osszes_elsejen = 0, napok_db[31], honap_pizza[6];
    for (i = 0; l[i].futar > 0; i++) {
        if (l[i].nap == 1) {
            for (j = 0; j < 5; j++) {
                if (l[i].pizza[j] > leg_db) leg_betu = 'A' + j;
                osszes_elsejen += l[i].pizza[j];
            }
        }
        for (int j = 0; j < 6; j++) {
            futarok[l[i].futar - 1] += l[i].pizza[j];
            napok[l[i].nap] += l[i].pizza[j];
            honap_pizza[j] += l[i].pizza[j];
        }
    }

    printf("\nfutarok\n");
    for (i = 0; i < 10; i++) printf("%d : %d\n", i, futarok[i]);

    leg_db = 0;
    int leg_futar = 0;
    for (i = 0; i < 10; i++) if (futarok[i] > leg_db) leg_futar = i;

    leg_db = 99;
    int legk_nap = 0;
    for (i = 1; i < 30; i++) {
        if (napok[i] > 0 && leg_db > napok[i]) legk_nap = i;
    }

    printf("\n\nnapok\n");
    for (i = 0; i < 30; i++) printf("%d :: %d\n", i, napok[i]);

    leg_db = 0;
    char legn_pizza = 0;
    for (i = 0; i < 6; i++) {
        if (leg_db < honap_pizza[i]) {
            legn_pizza = 'A' + i;
            leg_db = honap_pizza[i];
        }
    }

    printf("\n\nhonap pizzai\n");
    for (i = 0; i < 6; i++) printf("%c :: %d\n", 'A' + i, honap_pizza[i]);

    printf("1. legnepszerubb pizza elsejen: %c\n", leg_betu);

    printf("2. osszes pizza elsejen: %d\n", osszes_elsejen);

    printf("3. legtobb pizzat kiszallito futa sorszamar: %d\n", leg_futar);

    printf("4. Ezen a napon szallitottak ki a legkevesebb pizzat: %d\n", legk_nap);

    printf("5. Legnepszerubb piza a honapban: %c\n", legn_pizza);
}