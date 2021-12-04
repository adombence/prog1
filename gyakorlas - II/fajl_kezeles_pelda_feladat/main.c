#include <stdio.h>
#include <stdlib.h>

int erdekes(int n);

int main() {
    FILE *f = fopen("erdekes.txt", "w");
    int db = 0, n = 101, e, u, eu, s;
    fprintf(f, "100");

    while (db < 99998) {
        u = n % 10;
        s = n;
        while (s > 9) {
            e = s % 100 / 10;
            eu = s % 10;
            s /= 10;
        }
        if (u % (e + eu) == 0) {
            fprintf(f, "\n%d", n);
            db++;
        }
        n++;
    }
    fclose(f);
    printf("%d", erdekes(8));
    return 0;
}

int erdekes(int n) {
    FILE *f = fopen("erdekes.txt", "r");
    int szam;
    for (int i = 0; i < n; i++) {
        fscanf(f, "%d", &szam);
    }
    fclose(f);
    return szam;
}
