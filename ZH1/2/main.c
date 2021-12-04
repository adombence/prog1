#include <stdio.h>
#include <stdlib.h>

int main() {
    //2. feladat
    //irassa ki 10000-tol 100-ig azokat a szamokat, amlyek elso szamjegye kisebb mint az utolso
    /*int szam1=1234;
    int szam2=123;
    //EZERNEL NAGYOBB
    printf("%d\n",szam1);
    //utolso szamjegy
    printf("%d\n",szam1%10);
    //elso szamjegy
    printf("%d\n",szam1/1000%10);
    //EZERNEL NAGYOBB END
    //EZERNEL KISEBB
    printf("%d\n",szam2);
    printf("%d\n",szam2%10);
    printf("%d\n",szam2/100%10);
    //EZERNEL KISEBB END*/
    int elso, utolso;
    printf("\t");
    for (int i = 10000; i >= 100; i--) {
        if (i >= 1000) {
            elso = i / 1000 % 10;
            utolso = i % 10;
        } else {
            elso = i / 100 % 10;
            utolso = i % 10;
        }
        if (elso < utolso) {
            printf("%d\t", i);
        }

    }
    return 0;
}
