#include <stdio.h>
#include <stdlib.h>

int main() {
    struct elem {
        int x;
        struct elem *q;
    };

    struct elem *elso, *uj, *uccso;
    elso = NULL;
    int a;

    scanf("%d", &a);

    while (a) {
        uj = malloc(sizeof(struct elem));
        uj->x = a;
        uj->q = NULL;
        if (!elso) {
            elso = uj;
        } else {
            uccso->q = uj;
        }
        uccso = uj;
        scanf("%d", &a);
    }

    while (elso) {
        uccso = elso;
        printf("%d ", elso->x);
        elso = elso->q;
        free(uccso);
    }


    return 0;
}
