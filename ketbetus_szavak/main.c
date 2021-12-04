#include <stdio.h>
#include <stdlib.h>

int main() {
    for (char i = 'a'; i < 'a' + 10; i++) {
        for (char j = 'a'; j < 'a' + 10; j++) {
            printf("%c%c ", i, j);
        }
        printf("\n");
    }
    return 0;
}
