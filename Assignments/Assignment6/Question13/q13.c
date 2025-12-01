#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Enter the number : ");scanf("%u",&n);

	int x = log(n)/log(2);
	printf("In binary :"); 
	for(;x >= 0;x--){
		int y = ( n & (int)pow(2,x) )/(int)pow(2,x);
		printf("%d",y);
	}
	printf("\nReversed (in binary) : ");
	for(; n > 0 ; n/=2) {	
		printf("%d",n%2);
	}
	printf("\n");

	return 0;
}
