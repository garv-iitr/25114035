#include<stdio.h>

int main() {
	int n , i , j , k ;
	printf("Enter the value of n :");scanf("%d",&n);

	for(i = 1 ; i <= n  ;i++ ) {
		for(j = n ;j > n - i + 1 ; j--) {printf("%d ",j);}
		for(k =2*n + 1 - 2*i ; k > 0 ; k-- ){printf("%d ", n - i + 1);}		
		for(j = n - i + 2 ; j <= n ; j++){printf("%d ",j);}
		printf("\n");
	}
	for(i = 1 ;i < n ;i++){
		for(j = n ;j > i + 1  ; j--) {printf("%d ",j);}
		for(k = 2*i + 1;k > 0;k--){printf("%d ",i + 1);}
		for(j = i + 2 ;j <= n; j++) {printf("%d ",j);}
		
		printf("\n");
	}
	printf("\n");

	return 0;
}

