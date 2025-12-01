#include <stdio.h>

int main() {
    char ch = 'C';
    int x = 100 ;

    float result = (x<200)?ch:x;

    printf("Result : %f\n",result);
    return 0;
}