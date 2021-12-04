#include <stdio.h>
#include <stdlib.h>

int f(int x);

int main() {
    printf("%d", f(20));
    return 0;
}

int f(int x) {
    if (x > 10) {
        return f(x - 2);
    } else {
        return 27;
    }
}
