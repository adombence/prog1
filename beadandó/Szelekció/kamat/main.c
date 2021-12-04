#include <stdio.h>
#include <stdlib.h>

int main() {
    float kamat, toke, jov;
    int honap;

    printf("toke: ");
    scanf("%f", &toke);
    printf("kamat eves erteke (%%): ");
    scanf("%f", &kamat);
    printf("befektetes ideje/honapban: ");
    scanf("%d", &honap);

    if (honap < 12) {
        jov = toke * ((float) honap / 12) * (kamat / 100) / (float) honap;
    } else {
        jov = toke * (kamat / 100) / (float) honap;

    }
    for (int i = 0; i <= honap; i++) {
        printf("%f\n", jov);
        printf("%d. honap: %f\n", i, toke);
        toke += jov;

    }
    return 0;
}
