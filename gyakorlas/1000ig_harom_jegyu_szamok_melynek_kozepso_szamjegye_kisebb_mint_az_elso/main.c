#include <stdio.h>
#include <stdlib.h>

int main() {
    /*int x=123;
    printf("%d\n",x);
    kozepso:
    printf("%d\n",x/10%10);
    elso:
    printf("%d\n",x/100%10);*/
    printf("\t");
    for (int i = 100; i <= 999; i++) {
        if (i / 100 % 10 > i / 10 % 10) printf("%d\t", i);
    }
    return 0;
}
