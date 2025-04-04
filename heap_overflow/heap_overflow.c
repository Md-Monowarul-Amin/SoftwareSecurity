#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *service = (char *)malloc(20);
    char *auth = malloc(20);
    *auth = 'a';
    char line[120];
    // printf("%s\n", auth);
    
    fgets(line, 120, stdin);
    strcpy(service, line);

    if (strncmp(auth, "HACK", 4) == 0){
        printf("SUCCESS....!!!!!!! You have successfully triggered a heap overflow...\n");
    }

    return 0;
}