#include <stdio.h>
#include <stdlib.h>

/*keszits programot, ami a felhasznalo
nevet es eletkorat kiirja egy fajlba*/
int main() {

    FILE *f = fopen("felhasznalo.txt", "w");
    char nev[100];
    int kor = 0;
    printf("nev: ");
    gets(nev);
    fprintf(f, "%s\n", nev);
    printf("kor: ");
    scanf("%d", &kor);
    fprintf(f, "%d\n", kor);
    fclose(f);
    return 0;
}
