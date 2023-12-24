#include <stdio.h>
#include <stdlib.h>

int main() {
    int **p, i, j, k, n = 4, m = 3;
    p = (int**)malloc(sizeof(int*)*n);
    for (i = 0; i < n; i++) {
        p[i] = (int*)malloc(sizeof(int)*m);
    }
}