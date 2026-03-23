#include <stdio.h>

int main() {
    char arr[2][5] = {"hello" , "world"};
    printf("%c %c %c \n",arr[0][4],arr[1][4] , arr[1][5]);
    return 0;
}