#include <stdio.h>
#include <stdlib.h>

int main() {
    int f, e;
    scanf("%d %d", &f, &e);
    /**if(f>e){
        printf("szemetseg");
    }else printf("helyes");*/
    printf(f > e ? "szemetseg" : "helyes");
    return 0;
}
