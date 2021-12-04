#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a == b && b == c) {
        printf("3 egyforma");
    } else if (a == b || a == c || b == c) {
        printf("2 egyforma");
    } else printf("0 egyforma");
    return 0;
}
