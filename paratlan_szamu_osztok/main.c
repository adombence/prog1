#include <stdio.h>
#include <stdlib.h>

int main() {
    /*int szam,db=0;
    printf("Kerek egy szamot: ");
    scanf("%d",&szam);
    for(int i=1; i<=szam; i++){
        if(szam%i==0) db++;
    }*/
    int db = 0;
    for (int i = 1; i < 101; i++) {
        for (int j = 1; j <= i; j++) {
            //if(i%j==0) db++;
            printf("%d db osztoja van a %d szamnak.", i, j);
        }
        db = 0;
    }
    //printf("%d db osztoja van a %d szamnak.",db,szam);
    return 0;
}
