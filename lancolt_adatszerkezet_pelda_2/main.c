#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Lancolt adatszerkezet
//valtozok nelkul, egy pointerrel

int main() {
    struct varos {
        char nev[30];
        int ter, kod;
        struct falu *f1, *f2;
    };

    struct falu {
        char nev[30];
        int ter, kod;
        char fogl;
        struct varos *v;
    };

    struct varos *p;

    p = malloc(sizeof(struct varos));
    strcpy(p->nev, "Nyiregyhaza");
    p->ter = 20;
    p->kod = 1;
    p->f1 = malloc(sizeof(struct falu));
    p->f2 = malloc(sizeof(struct falu));

    strcpy(p->f1->nev, "Kemecse");
    p->f1->ter = 3;
    p->f1->kod = 0;
    p->f1->fogl = 'M';
    p->f1->v = p;

    strcpy(p->f2->nev, "Ujfeher");
    p->f2->ter = 4;
    p->f2->kod = 0;
    p->f2->fogl = 'I';
    p->f2->v = p;

    printf("%s", p->nev);
    printf("\n%s", p->f1->nev);
    printf("\n%s", p->f2->nev);
    printf("\n");

    printf("\nNyh masodik falujanak, a varosanak, az elso falujanak a foglalkozasa:");
    printf("\n%c", p->f2->v->f1->fogl);
    printf("\n");

    free(p->f1);
    free(p->f2);
    free(p);

    return 0;

}
