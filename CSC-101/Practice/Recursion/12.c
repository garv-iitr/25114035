#include <stdio.h>

int main() {
    printf("%d",fun(5));
}

int fun(int n) {
    if(n <= 1) return 0;
    return n + fun(n-2);
}