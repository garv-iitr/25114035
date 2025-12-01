#include <stdio.h>

int main() {
    head(3);
    printf("\n");
    tail(3);
}

void head(int n) {
    if(n==0) return ;
    head(n-1) ;
    printf("%d ",n);
}

void tail(int n) {
    if(n==0) return ;
    printf("%d ",n);
    tail(n-1);
}