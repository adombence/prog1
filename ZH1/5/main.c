#include <stdio.h>
#include <stdlib.h>

int main() {
    //5. feladat
    //Adjon meg egy 20 elemu karakterekbol allo tombot, valamint egy karaktert!
    //Pointeres eleressel irassa ki a tomb azon elemeit, amelyek elott az adott karakter van,
    //utanuk pedig egy szam kovetkezik
    char sz[] = {'a', 'b', 'a', 'd', 'L', 'f', 'g', 'a', 'i', '1', 'k', 'l', 'm', 'f', 'o', '2', 'q', 'a', 's', '3'};
    //a keresett karater:
    char k = 'a';
    int meret = sizeof(sz) / sizeof(sz[0]);
    for (int i = 0; i <= meret - 1; i++) {
        if (sz[i - 1] == k) {
            if (sz[i + 1] >= '0' && sz[i + 1] <= '9') {
                printf("%c\n", *(sz + i));
            }
        }
    }
    return 0;
}
