#include <stdio.h>
#include <stdlib.h>

/*Keszits programot ami egy dolgozat pontszamabol kiszamitja
  a szazalekos eredenyt majd kiirja a jegyet*/

int main() {
    int pont, szazalek;
    printf("elert pontszam: ");
    scanf("%d", &pont);
    szazalek = ((float) pont / 20) * 100;
    printf("%d szazalek\n", szazalek);
    if (szazalek < 59)printf("egyes");
    else if (szazalek < 69)printf("kettes");
    else if (szazalek < 79)printf("harmas");
    else if (szazalek < 89)printf("negyes");
    else if (szazalek > 89 && szazalek < 101) printf("otos");
    else printf("rossz ertek");
    return 0;
}
