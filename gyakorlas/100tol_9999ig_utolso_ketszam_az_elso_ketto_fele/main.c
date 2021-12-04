#include <stdio.h>
#include <stdlib.h>

int main() {
    /*//4 szamjegyu
    int x=1234;
    printf("%d\n",x);
    //utolso ketto
    printf("%d\n",x%100);
    //elso ketto
    printf("%d\n",x/100%100);
    //3 szamjegyu
    int y=123;
    printf("%d\n",y);
    //utolso ketto
    printf("%d\n",y%100);
    //elso keto
    printf("%d\n",y/10%100);*/
    int elso, utolso, db;
    for (int i = 100; i <= 9999; i++) {
        if (i < 1000) {
            elso = i / 10 % 100;
            utolso = i % 100;
        } else {
            elso = i / 100 % 100;
            utolso = i % 100;
        }
        if (utolso + utolso == elso) printf("%d\telso:%d\tutolso:%d\n", i, elso, utolso);
    }
    return 0;
}
