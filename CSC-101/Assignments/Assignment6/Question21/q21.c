#include<stdio.h>

int main() {
	int n;
	printf("Enter the number of rows :");scanf("%d",&n);

	int i ,j ,k ,m;
	
	for(i = 1; i <= n; i++){
		for( m = 0 ; m < 2*(n - i) ; m++ ) {
			printf(" ");
		}
		for( j = 1 ; j <= i ; j++ ) {
			printf("%d ",j);
		}
		for( k = i - 1; k > 0 ; k--) {
			printf("%d ",k); 
		}
		printf("\n");
	}
	
	return 0;
}
