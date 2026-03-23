#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';
    void *ptr ;

    ptr = &a;
    printf("Address of a = %x\n", ptr);
    printf("a = %d\n", *(int *)ptr); // cast to int* before dereferencing
    ptr = &b;
    printf("Address of b = %x\n", ptr);
    printf("b = %.2f\n", *(float *)ptr); // cast to float*
    ptr = &c;
    printf("Address of c = %x\n", ptr);
    printf("c = %c\n", *(char *)ptr); // cast to char*
 return 0;

}