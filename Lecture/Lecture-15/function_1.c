#include <stdio.h>

int func(int a)
{
int incr = a+1;
return (incr);
}


int main() {
    int x = 1;
    int result;
    result = func(x);
    printf("result=%d", result);
    return 0;

}