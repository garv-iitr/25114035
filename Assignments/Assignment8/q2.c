#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char remove(char *input , char *pattern) {
    int x = strlen(input) ;
    int y = strlen(pattern);

    for(int i = 0 ; i < x - y + 1 ; i++) {
        int z = 1 ;
        for(int j = 0 ; j < y ; j++) {
            if(input[i+j] != pattern[j]) {
                z = 0;
            }
        }

        if(z) {
            int k;
            for( k= 0 ; k < x - (i+y+1) ; k++) {
                input[i] = input[i+y+k] ;
            }
            input[i+k] = '\0';
            remove(input , pattern);
        }
    }

}


int main() {
    char input[100] ;
    char pattern[50];

    gets(input);
    gets(pattern);

    remove(input , pattern) ;
    return 0;



}