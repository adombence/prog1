#include <stdio.h>
#include <stdlib.h>

int main() {
    int osszeg, osszeg_;
    printf("osszeg: ");
    scanf("%d", &osszeg);
    if (osszeg >= 20000) {
        osszeg_ = osszeg / 20000;
        printf("20000: %d\n", osszeg_);
        osszeg = osszeg % 20000;
    }
    if (osszeg >= 10000) {
        osszeg_ = osszeg / 10000;
        printf("10000: %d\n", osszeg_);
        osszeg = osszeg % 10000;
    }
    if (osszeg >= 5000) {
        osszeg_ = osszeg / 5000;
        printf("5000: %d\n", osszeg_);
        osszeg = osszeg % 5000;
    }
    if (osszeg >= 2000) {
        osszeg_ = osszeg / 2000;
        printf("2000: %d\n", osszeg_);
        osszeg = osszeg % 2000;
    }
    if (osszeg >= 1000) {
        osszeg_ = osszeg / 1000;
        printf("1000: %d\n", osszeg_);
        osszeg = osszeg % 1000;
    }
    if (osszeg >= 500) {
        osszeg_ = osszeg / 500;
        printf("500: %d\n", osszeg_);
        osszeg = osszeg % 500;
    }
    if (osszeg >= 200) {
        osszeg_ = osszeg / 200;
        printf("200: %d\n", osszeg_);
        osszeg = osszeg % 200;
    }
    if (osszeg >= 100) {
        osszeg_ = osszeg / 100;
        printf("100: %d\n", osszeg_);
        osszeg = osszeg % 100;
    }
    if (osszeg >= 50) {
        osszeg_ = osszeg / 50;
        printf("50: %d\n", osszeg_);
        osszeg = osszeg % 50;
    }
    if (osszeg >= 20) {
        osszeg_ = osszeg / 20;
        printf("20: %d\n", osszeg_);
        osszeg = osszeg % 20;
    }
    if (osszeg >= 20) {
        osszeg_ = osszeg / 20;
        printf("20: %d\n", osszeg_);
        osszeg = osszeg % 20;
    }
    if (osszeg >= 10) {
        osszeg_ = osszeg / 10;
        printf("10: %d\n", osszeg_);
        osszeg = osszeg % 10;
    }
    if (osszeg >= 5) {
        osszeg_ = osszeg / 5;
        printf("5: %d\n", osszeg_);
        osszeg = osszeg % 5;
    }

    printf("\n%d", osszeg);
    return 0;
}
