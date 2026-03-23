#include <stdio.h>

int main() {
	int n ;
	printf("Enter the number : ");scanf("%d",&n);
	

	for(int i = 2 ; i < n ; i++ ) {

		int factor = 1;

		for(int j = 1 ; j < i ; j++) {
			if(i%j == 0) {
				factor = j;
			}
		}

		if(factor == 1) {  
			printf("%d\n",i);
		}
	}
	return 0 ;
}
