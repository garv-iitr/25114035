#include<stdio.h>

int main() {
	int n;
	printf("Enter the number of rows : ");scanf("%d",&n);
	
	int i;
	for(i = 1 ; i <= n ;i++){
		int j , k ; 
		for(j = i ; j > 0 ; j--){printf("* ");}
		for(k = 4*(n - i) + 1 ; k > 0 ; k--){printf(" ");}
		for(j = i ; j > 0 ; j--){printf("* ");}
		printf("\n");

	}
	for(i = n - 1 ; i >= 0 ;i--){
		int j , k ; 
		for(j = n - i ; j <= n ; j++){printf("* ");}
		for(k = 4*(n - i) - 3 ; k > 0 ; k--){printf(" ");}
		for(j = n - i ; j <= n ; j++){printf("* ");}
		printf("\n");
	}
return 0;
}
