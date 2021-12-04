#include <stdio.h>
#include <stdlib.h>

int main() {
    //Hany kisbetu van benne?
    char a[][2] = {{'a', 'b'},
                   {'c', 'd'},
                   {'E', 'F'},
                   {'G', 'H'}};
    int db = 0;
    /*printf("elso sor elso eleme: %c\n",**a);
    printf("\nAz elso sor elso elem cime: %p",&a[0][0]);
    printf("\nAz elso sor masodikelem cime: %p",&a[0][1]);
    printf("\nAz masodik sor elsoelem cime: %p",&a[1][0]);*/
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            //printf("\nAz %d. sor %d. elemenek cime: %p\n",i,j,&a[i][j]);
            //printf("Az %d. sor %d. elemenek erteke: %c\n",i,j,*(*a+2*i+j));
            if (*(*(a + i) + j) <= 'z' && *(*(a + i) + j) >= 'a')db++;
        }
    }
    printf("kis betuk szama: %d", db);
    return 0;
}
