#include <stdio.h>
#include <stdlib.h>
/* Irjon fuggvenyt, mely masodik int tipusu parameteret
az elso int tipusu parameterenek a ketszeresere noveli*/

int Duplazo(int a, int b);

int DuplazoPtr(int *a, int *b);

int main()
{
    int szam1,szam2;
    printf("szam1: ");
    scanf("%d",&szam1);
    printf("szam2: ");
    scanf("%d",&szam2);
    printf("%d",Duplazo(szam1,szam2));
    /*DuplazoPtr(&szam1,&szam2);
    printf("\nszam2: %d",szam2);*/
    return 0;
}

int Duplazo(int a, int b){
    b=(a*2);
    return b;
}

//pointeres megoldas
int DuplazoPtr(int *a, int *b){
    *b=((*a)*=2);
    return b;
}
