#include <stdio.h>

int main() {
    int arr[3][4];
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            arr[i][j] = i + j ;
            printf("%d ",&arr[i][j]);
        }
    }
    printf("\n %d \n %d \n %d \n %d \n %d \n",arr , arr+2 , *(arr + 2) , *((arr+2)+3) , *(*(arr+2)+3) );
    return 0;

}