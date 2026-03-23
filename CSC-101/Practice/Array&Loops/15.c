#include <stdio.h>

int main() {
    int arr[2][3] = {[0][0] = 5 , [1][1] = 15};

    printf("%d\n",arr[0][2]);
    printf("%d\n",arr[1][0]);
    return 0;
}