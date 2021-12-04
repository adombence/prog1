#include <stdio.h>
#include <stdlib.h>

int main() {
    int db = 0, jegyek[] = {5, 5, 4, 5, 5, 5, 5, 5, 5, 5};
    for (int i = 0; i < sizeof(jegyek) / sizeof(jegyek[0]); i++) {
        if (jegyek[i] == 5) db++;
    }
    printf("%d jeles tanulo van az osztalyban.\n", db);
    if (db != sizeof(jegyek) / sizeof(jegyek[0])) {
        printf("Nem jeles az osztaly!");
    } else {
        printf("Az osztaly jeles eredmenyt ert el!");
    }
    return 0;
}
