#include<stdio.h>

int main() {
	int n ;
	printf("Enter number of rows :");scanf("%d",&n);
	
	int i;
	for(i = n ; i > 0 ;i--){
		int j = i;
		while(j > 0){printf("*");j--;}
		printf("\n");
	}
	return 0;
}

