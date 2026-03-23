#include<stdio.h>

int main() {
    char s[] = "recursion";
    reverse(s, 0, strlen(s) - 1);
    printf("%s", s);
}

void reverse(char *str, int left, int right) {
    if (left >= right) return;
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;
    reverse(str, left + 1, right - 1);
}