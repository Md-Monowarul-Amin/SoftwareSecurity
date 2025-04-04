#include<stdio.h>
#include<stdlib.h>

int main(){
    char *a = (char *)malloc(20);
    char *b = malloc(10);
    char *c = malloc(10);

    *a = 'a';
    *b = 'b';
    *c = 'c';
    // free(a);

    *(a+25) = "d";
    // free(a);

    printf("%s\n", a);

    return 0;

}
