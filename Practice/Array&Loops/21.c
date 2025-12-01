#include <stdio.h>

int main() {
    int a = 1, b =1 ,c =1 ;
    while(a==b==c) {
        printf("%d%d%d",a,b,c);
        a++;b++;c++;
    }
    return 0;
}