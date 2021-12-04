#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[20];
    /*scanf("%s",a);
    scanf("%s",b);
    printf("%s\n",a);
    printf("%s\n",b);*/
    //int meret=strlen(a); -> megmondja a meretet
    //#include <string.h> kell hozza
    gets(a);
    int i = 0;
    while (a[++i] != 0) {
        if (a[i] == ' ')a[i] = '\n';
    }
    printf("%s", a);
    return 0;
}
