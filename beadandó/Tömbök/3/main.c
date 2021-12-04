#include <stdio.h>
#include <stdlib.h>

int main() {
    int ossz = 0, jegyek[] = {5, 4, 3, 2, 2, 5, 4, 3, 2, 2};
    for (int i = 0; i < sizeof(jegyek) / sizeof(jegyek[0]); i++) {
        ossz += jegyek[i];
    }
    printf("Az atlag: %f", (float) ossz / (sizeof(jegyek) / sizeof(jegyek[0])));

    return 0;
}
