#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pf;
    int errnum;
    pf = fopen("nemletezo.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "Hibakod: %d\n", errno);
        perror("Perror hibauzenete");
        fprintf(stderr, "Fajlnyitasi hiba: %s\n", strerror(errnum));
    } else {
        fclose(pf);
    }
    return 0;
}
