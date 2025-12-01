#include <stdio.h>

int main() {
    char array1[] = "ABC DEF";
    char array2[] = {'A','B','C',' ','D','E','F','\0'};
    printf("%s\n",array1);
    for(int i = 0 ; i < 8 ; i++) {
        printf("%c",array2[i]);
    }
    return 0;
}