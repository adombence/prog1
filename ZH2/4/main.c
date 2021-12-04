#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct t{
    float tomeg;
    char tipus[30];
    }t;

typedef t *telefon;

int Legkonnyebb(telefon tel, int m, t *n);

int main()
{
    int i=0;
    t *p=malloc(0);
    int db=0;
    while(i<20){
        db++;
        p=realloc(p,db*sizeof(t));
        printf("\ntomeg tipus\n");
        scanf("%f %s",&(p[db-1].tomeg),p[db-1].tipus);
        i++;
    }
    for(int i=0;i<=db;i++){
        printf("%d.: %.1f %s\n",i,(p[i].tomeg),p[i].tipus);

    }
    telefon temp=malloc(sizeof(t));
    printf("\n%d",Legkonnyebb(p,db,temp));
    printf("\nA legkonnyebb a(z) %s",temp->tipus);
    return 0;
}

int Legkonnyebb(telefon tel,int m, t *n){
    int sum=0;
    *n=*tel;
    for(int i=0;i<m;i++){
            if(n->tipus=='x'){
            if(n->tomeg>tel[i].tomeg) *n=tel[i];
            }
    }
    return sum;
}
