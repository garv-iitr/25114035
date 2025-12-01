#include <stdio.h>

int main() {
    int x = -65;
    unsigned char ch = (unsigned char)x;

    printf("x: %d\n",x);
    printf("ch(as int): %d\n",ch);
    printf("ch(as char): %c\n",ch);
    return 0;
}