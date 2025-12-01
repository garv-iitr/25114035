#include <stdio.h>

int main() {
	int n ;
	printf("Enter the value of odd integer(n>=1):");
	scanf("%d",&n);
	if(n%2 == 0){
		printf("Error!!Invalid n.\n");
		return 1;
	}
	int i , j ;
	for(i = 1 ; i < 2 * n ; i++){
		int x = 1;
		if(i%2 == 0){
			printf("\n");
			x = 0;
		}
		if((i > n) && x){
			i = 2 * n - i ;
			x = 2;
		}
		if((i%4 == 1) && (i != n)) {
			for(j=i/4;j>0;j--)	{printf("* ");}
			for(j=n-i+1;j>0;j--)	{printf("*");}
			for(j=1;j<=i/4;j++)	{printf(" *");}
		}
		if((i%4 == 3) && (i != n)) {
			for(j=(i+2)/4;j>0;j--)	{printf("* ");}
			for(j=n-i-1;j>0;j--)	{printf(" ");}
			for(j=1;j<=(i+2)/4;j++)	{printf(" *");}
		}
		if(i == n){
			for(j=1;j<=n;j++){
				if(j%2 == 1)	{printf("*");}	
				else 		{printf(" ");}
			}
		}
		if(x == 2){
			i = 2 * n - i ;
		}
	}
		printf("\n");
	return 0;
}
