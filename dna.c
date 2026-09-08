#include <stdio.h>

#include "dna.h"

void load_string(FILE *file, int *p, char *s, int t) {
    if (fscanf(file, "%d", p) != 1) {
        fprintf(stderr, "erro ao ler string do teste %d\n", t);
    }

    char c;
    do {
        c = getc(file);
    } while (c != '\n');

    fgets(s, *p + 1, file);
}

int medit_r(char a[], int n, char b[], int m, int cache[MAX_SIZE + 1][MAX_SIZE + 1]) {
    return 0;
}

int medit(char a[], int n, char b[], int m) {
    return 1;
}

int dedit(char a[], int n, char b[], int m) {
    return 2;
}
