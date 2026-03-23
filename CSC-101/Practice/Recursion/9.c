#include <stdio.h>

int main() {
    printf("%d\n",fun(3));
    return 0;
}

int fun(int x) {
    if(x==0) return 1;
    return fun(x-1) + fun(x-1);
}