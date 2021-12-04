#include <stdio.h>
#include <stdlib.h>

int faktorialis(int x);

int main() {
    int szam;
    printf("szam: ");
    scanf("%d", &szam);
    printf("%d\n", faktorialis(szam));
    return 0;
}

int faktorialis(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x * faktorialis(x - 1);
    }
}
