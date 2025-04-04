#include<stdio.h>
#include<stdlib.h>

void win(){
    printf("YOU WIN!!!..");
}

int main(){
    char *a = (char *) malloc(20);

    *a = 'a';


    free(a);

    char *d = (char *) malloc(20);
    char *e = (char *) malloc(20);

    return 0;

}