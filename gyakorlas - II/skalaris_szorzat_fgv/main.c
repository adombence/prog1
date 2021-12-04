#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ninc kesz
double SkalarisSzorzat(double x1, double y1, double x2, double y2);

double hossz(double x1, double y1);

int main() {
    int x1, y1, x2, y2;
    printf("x1: ");
    scanf("%d", &x1);
    printf("y1: ");
    scanf("%d", &y1);
    printf("x2: ");
    scanf("%d", &x2);
    printf("y2: ");
    scanf("%d", &y2);
    printf("%f", SkalarisSzorzat(x1, x2, y1, y2));
    return 0;
}

double hossz(double x, double y) {
    return sqrt(x * y);
}

double SkalarisSzorzat(double x1, double y1, double x2, double y2) {
    double cszog = (x1 * x2 + y1 * y2) / (hossz(x1, y1) * hosz(x2, y2));

}
