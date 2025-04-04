#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    char *a = (char *)malloc(20);
    strcpy(a, "aaaaaaaaa"); 

    char *b = (char *)malloc(20);
    strcpy(b, "bbbbbbbbb");

    char *c = (char *)malloc(30); 
    strcpy(c, "ccccccccc"); 

    // Free the allocated memory
    free(a);
    free(b);
    free(c);

    char *d = (char *)malloc(40);
    strcpy(d, "ddddddddd");

    char *e = (char *)malloc(40);
    strcpy(e, "eeeeeeeee");


    free(d);
    free(e);

    return 0;
}