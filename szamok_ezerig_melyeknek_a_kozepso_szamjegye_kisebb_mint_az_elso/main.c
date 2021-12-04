#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    int a=123;
    utolso:
    printf("%d\n",a%10);
    kozepso:
    printf("%d\n",a/10%10);
    elso:
    printf("%d\n",a/100%10);*/

    for (int i = 100; i <= 1000; i++) {
        if (i / 100 % 10 > i / 10 % 10) printf("%d ", i);
    }
    return 0;
}
