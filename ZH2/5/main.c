#include <stdio.h>
#include <stdlib.h>

/*Az in.txt allomanyban egesz szamok vannak elvalasztva szokozzel,
irassa ki azokat az out.txt allomanyba, melyek elso szamjegye azonos az utolsoval*/
int converter(char *s, int m, int x);

int main() {
    int szam, elso = -1, utolso, space = 0;
    FILE *f = fopen("in.txt", "r");
    char s[1000];
    while (!feof(f)) {
        fgets(s, 1000, f);
        printf("%s", s);
    }
    fclose(f);
    printf("\n\n");
    f = fopen("out.txt", "w");
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ' && space == 0) {
            utolso = i - 1;
            space = 1;
        } else {
            if (s[i] >= '0' && s[i] <= '9') {
                if (elso == -1) elso = i;
                szam = s[i] - 48;
                printf("\nszam: %d", szam);
            }
        }
        if (space == 1) {
            printf("\n");
            //printf("teszt1");
            if (s[elso] == s[utolso]) {
                //printf("teszt");
                for (int j = elso; j <= utolso; j++) {
                    if (s[j] >= '0' && s[j] <= '9') {
                        szam = s[j] - 48;
                        if (elso != utolso) fprintf(f, "%d", szam);
                    }
                }
            }
            if (elso != utolso) fprintf(f, " ");
            space = 0;
            elso = -1;
        }

    }
    return 0;
}

