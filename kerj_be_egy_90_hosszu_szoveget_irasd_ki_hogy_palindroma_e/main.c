#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[90];
    gets(a);
    int h = strlen(a);
    int jo = 1;
    for (int i = 0; i < h / 2 && jo != 0; i++) {
        if (a[i] != a[h - i - 1])jo = 0;
    }
    if (jo == 1) {
        printf("Palindroma!");
    } else {
        printf("Nem palindroma!");
    }
    return 0;
}
