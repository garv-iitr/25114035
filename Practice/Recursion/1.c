#include<stdio.h>

int main() {
    pattern(5);
}

void pattern(int n) {
    if (n <= 0) return;
    printf("%d ", n);
    pattern(n - 2);
    printf("%d ", n);
}