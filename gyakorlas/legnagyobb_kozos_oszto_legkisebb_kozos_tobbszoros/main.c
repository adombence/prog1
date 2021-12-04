#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, oszto, tobbszoros, i = 1, x, y, talalt = 0;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    //legnagyobb kozos oszto
    if (a > b) {
        x = b;
        y = a;
    } else {
        x = a;
        y = b;
    }
    while (i <= x) {
        if (x % i == 0)oszto = i;
        i++;
    }
    //nincs kesz
    i = y;
    do {
        if (i % y == 0) {
            talalt = 1;
            tobbszoros = i;
        } else {
            i += a;
        }
    } while (!talalt);
    printf("%d es %d legnagyobb kozos osztoja: %d legkisebb kozos tobbszorose: %d", a, b, oszto, tobbszoros);
    return 0;
}
