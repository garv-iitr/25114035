#include <stdio.h>

int main() {
    float f = 300.9999;
    char ch = (char)f;
    
    printf("f: %f\n",f);
    printf("ch as int : %d\n",ch);
    printf("ch as char : %c\n",ch);
    return 0;
}