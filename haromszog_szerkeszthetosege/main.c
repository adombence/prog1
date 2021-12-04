#include <stdio.h>
#include <stdlib.h>

/*Keszits programot, ami egy haromszog oldalinak hosszat
  bekerve kiszamitja, hogy szerkesztheto-e a haromszog*/
int main() {
    int a, b, c;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a) printf("A haromszog szerkesztheto");
    else printf("A haromszog nem szerkesztheto");
    return 0;
}
