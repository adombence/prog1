#include <stdio.h>
#include <stdlib.h>

int main() {
    //minden betut egyszer lehet felhasznalni
    char tomb[] = {'a', 'b', 'm', 'l', 'c', 'd', 'z', 's', 'q', 'a'};
    int dba = 0, dbl = 0, dbm = 0;
    for (int i = 0; i <= 9; i++) {
        if (*(tomb + i) == 'a') {
            dba++;
        } else if (*(tomb + i) == 'l') {
            dbl++;
        } else if (*(tomb + i) == 'm') {
            dbm++;
        }
    }
    if (dba > 1 && dbl > 0 && dbm > 0) {
        printf("kirakhato\n");
    } else {
        printf("nem rakhato ki\n");
    }
    return 0;
    return 0;
}
