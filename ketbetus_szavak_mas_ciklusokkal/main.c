#include <stdio.h>
#include <stdlib.h>

int main() {
    char i = 'a';
    char j = 'a';

    do {
        while (j < 'a' + 10) {
            printf("%c%c ", i, j);
            j++;
        }
        printf("\n");
        i++;
        j = 'a';
    } while (i < 'a' + 10);
    return 0;
}
