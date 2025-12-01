#include <stdio.h>

int main() {
	int n ;
	printf("Enter the number:");
	scanf("%d",&n);
	int i = n-1 ;
	int f = n;
	printf("Factorial of n = %d",n);
	while(i < n && i>=1) {
		printf(" * %d",i);
		f = f*i ; 	
		i--;
	}
	printf(" = %d\n",f);
	return 0;
}

