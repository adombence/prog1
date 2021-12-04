#include <stdio.h>
#include <stdlib.h>

int main() {
    /*int a=123;
    //123
    printf("%d\n",a);
    //3
    printf("%d\n",a%10);
    //23
    printf("%d\n",a%100);*/
    int x, prime, db;
    printf("\t");
    for (int i = 10; i <= 1000; i++) {
        x = i % 100;
        prime = 1;
        db = 0;
        while (prime <= x) {
            if (x % prime == 0)db++;
            prime++;
        }
        if (db == 2) printf("%d\t", i);
    }
    return 0;
}
