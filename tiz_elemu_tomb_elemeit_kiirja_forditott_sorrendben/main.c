#include <stdio.h>
#include <stdlib.h>

int main() {

    char tomb[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};
    int meret = sizeof(tomb) / sizeof(tomb[0]);
    for (int i = meret - 1; i >= 0; i--) {
        printf("%c ", tomb[i]);
    }
    printf("\nkezdo cim: \t\t%p", tomb);
    printf("\nmasodik ertek cime: \t%p", &tomb[1]);
    return 0;
}
