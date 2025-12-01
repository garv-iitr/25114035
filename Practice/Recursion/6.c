#include<stdio.h>

int main() {
    
    int n = 3;
    char str[2*n + 1];
    generateParens(n, n, str, 0);

}

void generateParens(int open, int close, char *str, int pos) {
    
    if (open == 0 && close == 0) {
        str[pos] = '\0';
        printf("%s\n", str);
        return;
    }
    
    if (open > 0) {
        str[pos] = '(';
        generateParens(open - 1, close, str, pos + 1);
    }
    
    if (close > open) {
        str[pos] = ')';
        generateParens(open, close - 1, str, pos + 1);
    }
}