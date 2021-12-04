#include <stdio.h>
#include <stdlib.h>

int main() {
    int pont;
    scanf("%d", &pont);
    switch (pont) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("elegtelen");
            break;
        case 5:
        case 6:
            printf("elegseges");
            break;
        case 7:
        case 8:
            printf("kozepes");
            break;
        case 9:
            printf("jo");
            break;
        case 10:
            printf("jeles");
            break;
        default:
            printf("rossz pont");

    }
    return 0;
}
