#include <stdio.h>
#include <stdlib.h>

int main() {
    int osszeg = 0;
    printf("Elso 100 pozitiv egesz:\n\t");
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) printf("%d\t", i);
        osszeg += i;
    }
    printf("\n\nosszeguk: %d", osszeg);
    return 0;
}
