#include <stdio.h>

int main() {
    char arr[2][3] = {"abc" ,"de"};
    printf("%c %c %c\n",arr[1][2] , arr[1][1] , arr[0][3]);
    return 0;
}