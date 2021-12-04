#include <stdio.h>
#include <stdlib.h>

int szam = 4;

int sorozat(int n);

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);
    printf("%d\n", sorozat(n));
    return 0;
}

int sorozat(int n) {
    if (n == 1) {
        return 4;
    } else {
        return 2 * sorozat(n - 1) + 3;
    }
}
