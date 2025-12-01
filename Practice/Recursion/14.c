#include <stdio.h>

int main() {
    printf("%d",fun(10));
}

int fun(int x) {
    if(x==0) return 0;
    return x + fun(x/2);
}