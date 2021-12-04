#include <stdio.h>
#include <stdlib.h>

int main() {
    int tomb[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    int szorzat = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) szorzat *= tomb[i][j];
            printf("%d", tomb[i][j]);
        }
        printf("\n");
    }
    printf("\nszorzat: %d\n", szorzat);
    printf("azok a szamok, amik kisebbek a szorzatnal:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tomb[i][j] < szorzat)printf("%d", tomb[i][j]);
        }
        printf("\n");
    }
    return 0;
}
