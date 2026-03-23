#include <stdio.h>

int main() {
    int arr[3][3] = {[0][0]  = 1 , [1][1] = 2};
    printf("%d %d %d %d %d %d %d %d %d\n" , arr[0][0] , arr[0][1] ,arr[0][2] , arr[1][0] , arr[1][1] , arr[1][2] , arr[2][0] , arr[2][1] , arr[2][2]);
    return 0;
}