#include <stdio.h>
#include <stdlib.h>

int main() {
    struct adat {
        char nev[13];
        short eletkor;
    } tomb[2];

    strcpy(tomb[0].nev, "Adam");
    tomb[0].eletkor = 20;
    strcpy(tomb[1].nev, "Eva");
    tomb[1].eletkor = 18;

    FILE *fp;

    fp = fopen("adat.dat", "wb");
    fwrite(tomb, sizeof(struct adat), 2, fp);
    fclose(fp);
    return 0;
}
