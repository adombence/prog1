#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char oszlop;
    int sor;
} cella;

int tavolsag(cella c);

int main() {

    cella t[10];
    for (int i = 0; i < 10; i++) {
        t[i].oszlop = rand() % 26 + 'A';
        t[i].sor = rand() % 50 + 1;
        printf("%c%d\t", t[i].oszlop, t[i].sor);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", tavolsag(t[i]));
    }
    printf("\n");
    cella min;
    min = t[0];
    for (int i = 1; i < 10; i++) {
        if (min > tavolsag(t[i])) min = t[i];
    }
    printf("\n%c%d", min.oszlop, min.sor);
    return 0;
}

int tavolsag(cella c) {
    return c.sor - 1 + c.oszlop - 'A';
}
