#include <stdio.h>

int main() {
	int a , sum = 0 , i = 0 , temp = 0 ;
	while(a != 0){
		scanf("%d", &a);
		sum += a;
		i +=1 ;
		temp = a > temp ? a : temp ;
	}

	printf("Sum = %d\nMean = %.2f\nMax : %d\n",sum,(float)sum/(i-1),temp);

	return 0;
}
