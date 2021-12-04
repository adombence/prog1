#include <stdio.h>
#include <stdlib.h>

//Kerd be a viz hofokat, allapitsd meg belele a halmazallapotot!
int main() {
    int temp;
    scanf("%d", &temp);
    (temp > 99) ? printf("goz") : (temp < 1) ? printf("jeg") : printf("folyadek");
    return 0;
}
