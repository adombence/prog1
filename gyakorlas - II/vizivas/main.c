#include <stdio.h>
#include <stdlib.h>

//nincs kesz
typedef struct {
    double min, max;
} kapacitas;

kapacitas ket_ember(kapacitas a, kapacitas b);

double atlag(kapacitas a);

kapacitas tobb_ember(kapacitas *x, int db);

int main() {
    kapacitas t[10];
    for (int i = 0; i < 10; i++) {
        t[i].min = (rand() % 5 + 8) / (10 * 1.);
        t[i].max = (rand() % 34 + 20) / (10 * 1.);
    }
    return 0;
}

kapacitas ket_ember(kapacitas a, kapacitas b) {
    kapacitas temp;
    temp.min = a.min + b.min;
    temp.max = a.max + b.max;

    return temp;
}

double atlag(kapacitas a) {
    return (a.max + a.min) / 2;
}

kapacitas tobb_ember(kapacitas *x, int db) {
    kapacitas seged = x[0];
    kapacitas y;
    for (int i = 1; i < db; i++) {
        y = ket_ember(y, x[i]);
    }
    return y;
}
