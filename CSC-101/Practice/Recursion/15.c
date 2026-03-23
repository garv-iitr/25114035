#include <stdio.h>

int main() {
    fun(4);
}

int fun(int n) {
    if(n==1) return 1;
    int k = fun(n-1);
    printf("%d",k);
    return n;
}
