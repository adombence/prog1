#include <stdio.h>
#include <stdlib.h>

int main() {
    float ossz = 0, homerseklet[] = {-2.04, 11.26, -6, 13.05, 3.36, -4.74, 7.88, 7.56, 1.13, 10.37, 0.05, 1.02, -2.72,
                                     -9.48, 0.69, 5.36, 4.13,
                                     5.58, 3.86, 8.86, 9.18, -5.29, -9.61, -9.4, 0.73, 14.6, 0.14, 6.95, 8.51, -2.42};
    int m = sizeof(homerseklet) / sizeof(homerseklet[0]);
    for (int i = 0; i < m; i++) {
        ossz += homerseklet[i];
    }
    //printf("ossz: %f\n",ossz);
    printf("atlag: %f", ossz / m);
    return 0;
}
