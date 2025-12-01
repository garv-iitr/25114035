#include <stdio.h>

int main() {
    int arr[3][3] = {[0][0] = 5 , [1][2] = 10 , [2][1] = 15};
    printf("%d %d %d %d\n",arr[0][0],arr[1][2],arr[2][1],arr[2][2]);
    return 0;
}