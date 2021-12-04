#include <stdio.h>
#include <stdlib.h>

void prime(int a);

int main() {

    int szam;
    printf("A vizsgalt szam: ");
    scanf("%d", &szam);
    prime(szam);

    return 0;
}

void prime(int a) {
    int i = 1, db = 0;

    while (i <= a) {
        if (a % i == 0) db++;
        i++;
    }

    if (db == 2) {
        printf("A vizsgalt szam prim!");
    } else {
        printf("A vizsgalt szam nem prim!");
    }
}
