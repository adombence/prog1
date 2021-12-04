#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam1,szam2,talalt=0,szami;
    printf("szam1= ");
    scanf("%d",&szam1);
    printf("szam2= ");
    scanf("%d",&szam2);
    szami=szam1;
    do{
        if(szam1%szami==0 && szam2%szami==0){
            talalt=1;
        }else szami--;
    }while(!talalt);
    printf("%d",szami);
    return 0;
}
