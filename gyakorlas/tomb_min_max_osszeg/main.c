#include <stdio.h>
#include <stdlib.h>

int main() {
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int meret = sizeof(t) / sizeof(t[0]);
    int min = t[0];
    int max = t[0];
    int osszeg = 0;
    for (int i = 0; i <= meret - 1; i++) {
        if (min > t[i])min = t[i];
        if (max < t[i])max = t[i];
        osszeg = osszeg + t[i];
    }
    printf("min:\t%d\nmax:\t%d\nosszeg:\t%d", min, max, osszeg);
    return 0;
}
