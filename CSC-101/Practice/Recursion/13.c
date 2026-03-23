#include <stdio.h>

int main() {
    printf("%d",fun(6));
}

int fun(int n) {
    if(n<=1) return 1;
    if(n%2 == 0) return fun(n/2) ;
    return fun(n/2) +fun(n/2 + 1);
}
