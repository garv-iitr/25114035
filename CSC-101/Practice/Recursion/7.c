#include <stdio.h>


int count = 0;

void hanoi(int n , char src , char aux , char dest) {
    if(n == 0) return ;
    hanoi(n-1 , src , dest , aux) ;
    printf("Move disk %d from %c to %c\n",n,src,dest);
    count++;
    hanoi(n-1 , aux , src , dest);
}

int main() {
    hanoi(3,'A','B','C');
    printf("Total moves: %d\n",count);
    return 0;
}






