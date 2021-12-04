#include <stdio.h>
#include <stdlib.h>

int main() {

    int tomb[] = {1, 2, 3, 4, 5, 6};
    //minden masodik elemet kell kiiratni
    //amit kapni kell: 2 4 6
    //megkotes:
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(tomb + i * 2 + 1));
    }
    return 0;
}
