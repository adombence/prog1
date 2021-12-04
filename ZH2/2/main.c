#include <stdio.h>
#include <stdlib.h>

/*Irjon fuggvenyt, mely kepes egy char tipusokat
 tartalmazo tombbol vissza adni a legkisebb elemet*/

char LegKisebbTag(char c[], int meret);

int main() {
    char Tomb[] = {'Q', 'H', 'C', 'E', 'G', 'B', 'C', 'Q', 'F', 'G'};
    int meret = (int) sizeof(Tomb) / (int) sizeof(Tomb[0]);
    printf("\n\nlegkisebb elem: %c", LegKisebbTag(&Tomb, meret));
    return 0;
}

char LegKisebbTag(char c[], int meret) {
    char min = c[0];
    for (int i = 0; i <= meret - 1; i++) {
        //printf("\n%c",c[i]);
        if (min > c[i])min = c[i];
        //printf("\nmin: %c",min);
    }
    return min;
}
