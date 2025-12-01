#include <stdio.h>

int main() {
    int x = 260 ;
    char ch = (char)x;
    float f = ch ;

    printf("x as int : %d\n",x);
    printf("x as char(after cast): %c\n",ch);
    printf("x as char as int : %d\n",ch);
    printf("ch as float: %f\n",f);
    return 0;
}