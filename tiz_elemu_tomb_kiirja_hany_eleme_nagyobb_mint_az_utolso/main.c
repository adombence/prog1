#include <stdio.h>
#include <stdlib.h>

int main() {
    int tomb[] = {11, 19, 8, 7, 6, 5, 4, 3, 22, 10};
    int db = 0;
    for (int i = 0; i <= 8; i++) {
        if (*(tomb + i) > *(tomb + 9)) db++;
    }
    printf("%d db elem nagyobb mint az utolso!", db);
    printf("\nA tomb kezdo cime: %p", tomb);
    printf("\nA tomb+2 cime: %p", tomb + 2);
    printf("A tomb harmadik eleme: %d", *(tomb + 2));

    return 0;
}
