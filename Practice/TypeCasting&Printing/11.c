#include <stdio.h>

int main() {
    int a = 5 , b = 2 ;
    float r1 = (float)(a/b);
    float r2 = (float)a/b ;

    printf("r1 : %f\n",r1);
    printf("r2 : %f\n",r2);
    return 0;
}