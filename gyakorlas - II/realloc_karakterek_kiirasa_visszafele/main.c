#include <stdio.h>
#include <stdlib.h>
//Nagy X!
/*
pl:
a
b
c
x
cba
*/
int main() {
    char *p = malloc(0), c, s[4];
    int db = 0;
    c = getchar();

    while (c != 'X') {
        gets(s);
        db++;
        p = realloc(p, db * sizeof(char));
        p[db - 1] = c;
        c = getchar();
    }

    for (int i = db - 1; i >= 0; i--) {
        printf("%c ", p[i]);
    }
    return 0;
}
