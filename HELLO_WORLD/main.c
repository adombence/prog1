#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int binaris[4];
    int i = 0;
    printf("x= ");
    scanf("%d", &x);
    while (x != 0) {
        if (x < 10) {
            printf("\n%2d| %d", x, x % 2);
        } else {
            printf("\n%d| %d", x, x % 2);
        }
        binaris[i] = x;
        i++;
        x = x / 2;

    }
    if (x == 0)printf("\n 0|\n");
    printf("A szam binaris alakja:\n");
/*for(int j=4; j<=0; j--){
    printf("%d", binaris[j]);
}*/
    printf("%d", binaris[4]);
    printf("%d", binaris[3]);
    printf("%d", binaris[2]);
    printf("%d", binaris[1]);
    printf("%d", binaris[0]);
    return 0;
}
