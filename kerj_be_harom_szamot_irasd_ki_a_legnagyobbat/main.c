#include <stdio.h>
#include <stdlib.h>

int main() {
    int elso, masodik, harmadik;
    printf("kerem az elso szamot: ");
    scanf("%d", &elso);
    int max = elso;
    printf("kerem a masodik szamot: ");
    scanf("%d", &masodik);
    if (max < masodik) max = masodik;
    printf("kerem a harmadik szamot: ");
    scanf("%d", &harmadik);
    if (max < harmadik) max = harmadik;
    printf("a legnagyobb szam a %d volt.", max);
    return 0;
}
