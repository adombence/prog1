#include <stdio.h>
#include <stdlib.h>

struct ksz {
    char c1, c2;
};
typedef struct ksz ketbetu;

void probafgv() {
    ketbetu b;
}

int main() {

    ketbetu betu;
    betu.c1 = 'a';
    betu.c2 = 'B';
    printf("%c\n%c\n", betu.c1, betu.c2);

    struct cella {
        int m1;
        char m2;
    };

    struct cella v2;
    v2.m1 = 24;
    v2.m2 = 'G';
    printf("%d\n%c", v2.m1, v2.m2);

    struct {
        float f1, f2;
    } v1;

    v1.f1 = 3.4;
    v1.f2 = 4.56;
    printf("\n%f\n%f", v1.f1, v1.f2);
    //TODO:
    int a = 37;
    printf("\n%d", a);
    return 0;
}
