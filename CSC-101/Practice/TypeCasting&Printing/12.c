#include <stdio.h>

int main() {
    int x = 5;
    float y = 5.5 ;
    float result = (x>3)?x:y;

    printf("Result: %f\n",result);
    return 0;
}