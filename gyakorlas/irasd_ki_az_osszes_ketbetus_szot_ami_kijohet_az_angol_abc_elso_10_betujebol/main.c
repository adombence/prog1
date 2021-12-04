#include <stdio.h>
#include <stdlib.h>

int main() {
    char a = 'a';
    char b = 'a';
    do {
        while (b < 'a' + 10) {
            printf("%c%c  ", a, b);
            b++;
        }
        printf("\n");
        a++;
        b = 'a';
    } while (a < 'a' + 10);
    return 0;
}
