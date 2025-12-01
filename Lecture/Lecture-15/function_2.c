#include <stdio.h>

int func(int a){
if (a==0)
return 1;

else
return 1+func(a-1);
}
int main() {

    int x = 9;
    int result;
    result = func(x);
    printf("result=%d",result);
    return 0;

}