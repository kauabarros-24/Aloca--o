#include <stdio.h>
#include <stdlib.h>

int main () {
    char *p;
    p = (char*)malloc(sizeof(char)*2);
    p[0] = 'a';
    *(p+1) = 'b';
    printf("%d %d\n", p[0], p[1]);
    free(p);
}
