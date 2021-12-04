#include <stdio.h>
#include <stdlib.h>

int main() {
    int sajat, fonok;
    printf("sajat: ");
    scanf("%d", &sajat);
    printf("fonok:");
    scanf("%d", &fonok);
    (sajat < fonok ? printf("szemetseg!") : printf("helyes"));
    return 0;
}
