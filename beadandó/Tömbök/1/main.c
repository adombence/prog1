#include <stdio.h>
#include <stdlib.h>

int main() {
    int db = 0, jegyek[] = {5, 4, 3, 2, 2, 5, 4, 3, 2, 2};
    for (int i = 0; i < 10; i++) {
        if (jegyek[i] == 1) db++;
    }
    if (db != 0) {
        printf("%d bukas volt a csoportban!", db);
    } else {
        printf("Nem volt bukas a csoportban!");
    }
    return 0;
}
