#include <stdio.h>
#include <stdlib.h>

int main() {
    //nincs kesz
    int tombi[4];
    char tombc[10];
    for (int i = 0; i <= 3; i++) {
        printf("tombi[%d]: ", i);
        scanf("%d", &tombi[i]);
    }
    printf("\n");
    for (int i = 0; i <= 3; i++) {
        printf("tombi[%d]: %d\n", i, tombi[i]);
    }
    for (int i = 0; i <= 10; i++) {
        printf("tombc[%d]: ", i);
        gets(&tombc[i]);
    }
    for (int i = 0; i <= 10; i++) {
        printf("tombc[%d]: %c\n", i, tombc[i]);
    }
    return 0;
}
