#include <stdio.h>
#include <stdlib.h>

void diszsor(int szam);

void custom_diszsor(int szam);

int main() {
    int a;
    printf("a: ");
    scanf("%d", &a);
    diszsor(a);
    custom_diszsor(a);
    return 0;
}

void diszsor(int szam) {
    while (szam > 0) {
        printf("*");
        szam--;
    }
}

void custom_diszsor(int szam) {
    char c;
    printf("\nA kivant karakter: ");
    scanf("%d");
    scanf("%c", &c);
    while (szam > 0) {
        printf("%c", c);
        szam--;
    }
}
