#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Lancolt adatszerkezet

int main() {
    struct varos {
        char nev[30];
        int ter, kod;
        struct falu *f1, *f2;
    } nyh;

    struct falu {
        char nev[30];
        int ter, kod;
        char fogl;
        struct varos *v;
    } ke, uj;

    strcpy(nyh.nev, "Nyiregyhaza");
    nyh.ter = 20;
    nyh.kod = 1;
    nyh.f1 = &ke;
    nyh.f2 = &uj;

    strcpy(ke.nev, "Kemecse");
    ke.ter = 3;
    ke.kod = 0;
    ke.fogl = 'M';
    ke.v = &nyh;

    strcpy(uj.nev, "Ujfeher");
    uj.ter = 4;
    uj.kod = 0;
    uj.fogl = 'I';
    uj.v = &nyh;


    printf("\t nev\t\tter\tkod\tf1/fogl\t\tf2/v\n");
    printf("%p ", &nyh);
    printf("%s\t%d\t%d\t%p\t%p\n", nyh.nev, nyh.ter, nyh.kod, nyh.f1, nyh.f2);
    printf("%p ", &ke);
    printf("%s\t%d\t%d\t%c\t\t%p\n", ke.nev, ke.ter, ke.kod, ke.fogl, ke.v);
    printf("%p ", &uj);
    printf("%s\t%d\t%d\t%c\t\t%p\n", uj.nev, uj.ter, uj.kod, uj.fogl, uj.v);

    printf("\nNyh elso faluja: %s", (*nyh.f1).nev);
    printf("\nNyh masodik falujanak, a varosanak a terulete: %d km^2", (*(*nyh.f2).v).ter);
    printf("\nugyanez mas kiirassal:");
    printf("\nNyh masodik falujanak, a varosanak a terulete: %d km^2", nyh.f2->v->ter);
    printf("\nKe varosanak, a masodik falujanak a foglalkozasa: %c\n", ke.v->f2->fogl);

    printf("\n");

    return 0;
}
