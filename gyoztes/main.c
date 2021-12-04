#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1, v2, v3, elso, masodik, harmadik;
    printf("kerem a gerelyhajitok eredmenyeit meterben!");
    printf("\nelso versenyzo: ");
    scanf("%d", &v1);
    printf("masodik versenyzo: ");
    scanf("%d", &v2);
    printf("harmadik versenyzo: ");
    scanf("%d", &v3);
    if (v1 < v2) v1 = v2;
    if (v1 < v3) v1 = v3;
    printf("A legnagyobb: %d", v1);

    return 0;
}
