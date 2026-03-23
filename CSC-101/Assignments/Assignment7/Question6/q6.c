#include <stdio.h> 

int main() {
	int n , k ;
	printf("Enter array size(n) :  ");scanf("%d",&n);
	int a[n],b[n] ;
	printf("A[%d] = ",n);
	for(int i = 0 ; i < n ; i++) {
		scanf("%d",&a[i]);
	}
	printf("Enter K(Right shift index) = ");scanf("%d",&k);
	for(int i = 0 ; i < n ; i++) {
		b[(i+k)%n] = a[i];
	}
	printf("Output array B[%d] = ",n);
	for(int i = 0; i < n ; i++) { 
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
}
