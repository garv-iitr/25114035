#include <stdio.h>

int main() {
    int *arr = (int *)malloc(3*4*sizeof(int)) ;
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            * (arr + i*4 + j) = i + j;
        }
    }


}