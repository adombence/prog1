#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f = fopen("main.c", "r");
    char sor[100];
    int i;
    while (!feof(f)) {
        fgets(sor, 100, f);
        for (i = strlen(sor) - 1; i > -1; i--) {
            printf("%c", sor[i]);
        }
    }
    fclose(f);
    return 0;
}
