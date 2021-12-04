#include <stdio.h>
#include <stdlib.h>

int pakol(int n);

int main() {
    printf("%d", pakol(5));
    return 0;
}

int pakol(int n) {
    if (n == 1) return 1;
    else return pakol(n - 1) + 1 + pakol(n - 1);
}
