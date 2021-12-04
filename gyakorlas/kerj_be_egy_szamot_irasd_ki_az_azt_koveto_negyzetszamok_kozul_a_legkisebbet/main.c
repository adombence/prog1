#include <stdio.h>
#include <stdlib.h>

int main() {
    int szam;
    scanf("%d", &szam);
    int x = szam;
    int y;
    int negyzet = 0;
    while (negyzet == 0) {
        y = 0;
        while (y <= x) {
            if (y * y == x)negyzet = 1;
            y++;
        }
        if (negyzet == 0) x++;
    }
    if (negyzet == 1) printf("%d", x);
    return 0;
}
