#include<stdio.h>

int main() {
	int n;
	printf("Enter the value of n :");scanf("%d",&n);
	
	int i = 0;
	while(i < n) {
		printf("* ");
		i++;
	}
	printf("\n");
	int j ;
	for(j = 0; j < n - 2 ;j++){
		printf("* ");
		int m ;
		for (m = 0;m < n-2 ;m++){printf("  ");}
		printf("*");
		printf("\n");
	}
	int k = 0;
	while(k < n) {
		printf("* ");
		k++;
	}
	printf("\n");
return 0;
}
