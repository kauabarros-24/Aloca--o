#include <stdio.h>
#include <stdlib.h>

int main() {        
    int *p, i;
    p = (int*)malloc(sizeof(int)*2);
    p = (int*)realloc(p, sizeof(int)*20);  
    for (i = 0; i < 20; i++) {
        p[i] = i;
    }
    p = (int*)realloc(p, sizeof(int)*2);
    printf("Local final = %u\n", p);
}