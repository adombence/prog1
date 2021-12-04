#include <stdio.h>
#include <stdlib.h>

int main() {
    char k, v, i;
    scanf("%c %c", &k, &v);
    if (k < v) {
        i = k;
        while (i <= v) {
            printf("%c", i);
            i++;
        }
    }
    if (k > v) {
        i = k;
        while (i >= v) {
            printf("%c", i);
            i--;
        }
    }
    if (k == v) {
        printf("%c %c", k, v);
    }
    return 0;
}
