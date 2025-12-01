#include<stdio.h>

int main() {
    printf("%d", power(2, 5));
}

int power(int a, int b) {
    if (b == 0) return 1;
    
    int half = power(a, b / 2);
    
    if (b % 2 == 0) {
        return half * half;
    }
    else {
        return a * half * half;
    }
}