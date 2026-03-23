#include <stdio.h>

int main() {
    char arr[2][4] = {"foo","bar"};

    printf("%c\n",arr[1][3]);
    printf("%s\n",&arr[1][3]);
    return 0;
}