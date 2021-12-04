#include <stdio.h>
#include <stdlib.h>

int main() {
    /*int i=123;
    printf("%d\n",i/100); elso
    printf("%d\n",i%100/10); masodik
    printf("%d\n",i%10); harmadik*/
    printf("\t");
    for (int i = 100; i < 1000; i++) {
        if (i / 100 > i % 100 / 10)printf("%d\t", i);
    }
    return 0;
}
