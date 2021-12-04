#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //max 50 karakter van egy sorban
    //max 150 sor van
    char a[150][50];
    int db = -1;
    do {
        db++;
        gets(a[db]);
    } while (strlen(a[db]) > 0);
    for (int i = db - 1; i >= 0; i--) {
        printf("\n%s: %d", a[i], strlen(a[i]));
    }
    return 0;
}
