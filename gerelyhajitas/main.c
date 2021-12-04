#include <stdio.h>
#include <stdlib.h>

//Kerd be harom gerelyhajito legjobb eredmenyet, hirdess gyoztest

int main() {
    int a, b, c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a > b && a > c) {
        printf("A gyoztes az \"a\" versenyzo!");
    } else if (a < b && c < b) {
        printf("A gyoztes az \"b\" versenyzo!");
    } else if (a < c && b < c) {
        printf("A gyoztes az \"c\" versenyzo!");
    } else printf("Dontetlen!");
    return 0;
}
