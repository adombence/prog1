#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//beolvasas gets vagy fscanf

int converter(char *s, int m, int x);

int main() {
    typedef struct {
        char nev[30];
        int ertek;
    } gy;
    gy *t = malloc(0);
    FILE *f = fopen("in.txt", "r");
    char s1[30], s2[30], s3[30];
    int db = 0;
    gy seged;
    while (!feof(f)) {
        db++;
        t = realloc(t, db * sizeof(gy));

        fscanf(f, "%s", t[db - 1].nev);
        fscanf(f, "%s", s2);
        fscanf(f, "%s", s3);

        t[db - 1].ertek = converter(s2, strlen(s2), 2) * converter(s3, strlen(s3), 5);
    }
    fclose(f);
    f = fopen("out.txt", "w");
    //buborek
    for (int i = 0; i < db - 1; i++) {
        for (int j = 0; j < db - 1; j++) {
            if (t[j].ertek > t[j + 1].ertek) {
                seged = t[j];
                t[j] = t[j + 1];
                t[j + 1] = seged;
            }
        }
    }


    for (int i = 0; i < db; i++) {
        printf("%s %d\n", t[i].nev, t[i].ertek);
        fprintf(f, "%s:\t%dFt\n", t[i].nev, t[i].ertek);
    }
    fclose(f);
    return 0;
}

int converter(char *s, int m, int x) {
    int k = 0;
    for (int i = 0; i < m - x; i++) {
        k = k * 10 + s[i] - '0';
    }
    return k;
}
