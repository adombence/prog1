#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("A viz hofoka= ");
    scanf("%d", &x);
    if (x <= 0) {
        printf("szilard");
    } else if (x > 0 && x < 100) {
        printf("folyekony");
    } else {
        printf("gaz");
    }

    return 0;
}
