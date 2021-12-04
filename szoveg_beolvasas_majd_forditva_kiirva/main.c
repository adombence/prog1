#include <stdio.h>
#include <stdlib.h>

int main() {
    char sz[30];
    scanf("%s", sz);
    //printf("%s\n",sz);
    int hossz = 0;
    while (sz[hossz] != '\0')hossz++;
    for (int i = hossz - 1; i >= 0; i--) {
        printf("%c", sz[i]);
    }
    return 0;
}
