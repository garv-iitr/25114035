#include <stdio.h>

void fun(int n) {
    if(n <= 0) return ;
    fun(n-1);
    printf("%d",n);
    fun(n-2);
}

int main() {
    fun(3);
}
