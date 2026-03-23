#include <stdio.h>

int main() {
    fun('A');
}

void fun(char c) {
    if(c>'D') return ;
    fun(c+1);
    printf("%c",c);
}