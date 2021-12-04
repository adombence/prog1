#include <stdio.h>
#include <stdlib.h>

int main() {
    int db = 1;
    char tomb[4][4] = {{'a', 'B', 'C', 'd'},
                       {'e', 'F', 'G', 'h'},
                       {'i', 'J', 'K', 'l'},
                       {'m', 'N', 'O', 'p'}};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (tomb[i][j] > 'a' && tomb[i][j] < 'z')db++;
        }
    }
    printf("%d db kisbetu volt", db);
    return 0;
}
