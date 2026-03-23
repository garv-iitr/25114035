#include<stdio.h>

int main() {
	int n ;
	printf("Enter the value of n :");scanf("%d",&n);

	int i , sum = 0;
	for(i = 1 ;i <= n ; i++) {
		int j , Factorial = 1 ;
		for(j = 1 ; j <= i ; j++) {
			Factorial = Factorial * j;
		}
		printf("+%d! ",i);
		sum = sum + Factorial;
	}
	printf(" = %d\n",sum);
	return 0;
}
