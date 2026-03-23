#include<stdio.h>

int main() {
	int n ;
	printf("Enetr the value of N :");scanf("%d",&n);

	int i = 1 , j ;

	while(i <= n){
		char j = 64 + i ;
		int m = 0;
		for(;m < i; m++){printf("%c",j);}
		printf("\n");
		i++;
	}
	return 0;
}

