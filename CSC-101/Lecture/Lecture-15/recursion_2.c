#include <stdio.h>

void mystery(int n) { 
    if (n <= 0) return; 
    printf("%d ", n);
    mystery(n - 2);

}

int main() {

    mystery(7);
    return 0;

}