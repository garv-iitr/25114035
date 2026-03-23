#include <stdio.h>

void main() {
    int i = 0 ; int j = 0; 
    for(i = 0 ; i < 5 ; i++) {
        for(j = 0 ; j < 4 ; j++) {
            if(i > 1)
            break;
        }
        printf("Hi\n");
    }
}