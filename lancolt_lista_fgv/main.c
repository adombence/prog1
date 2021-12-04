#include <stdio.h>
#include <stdlib.h>

//lancfa

struct fa {
    double y;
    double *bal, *jobb;
};
typedef struct fa *gyoker;

double osszeg(gyoker gy);

int main() {
    struct fa pl;
    pl.y = 4.1;

    double a = 2.3;
    double b = 5.4;

    pl.bal = &a;
    pl.jobb = &b;

    printf("\n%f", osszeg(&pl));
    return 0;
}

double osszeg(gyoker gy) {
    return gy->y + *(gy->bal) + *(gy->jobb);
}
