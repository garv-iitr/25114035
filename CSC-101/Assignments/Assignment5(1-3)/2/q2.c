#include <stdio.h>

int main() {
	int n;
	printf("Enter the height of pyramid : ");scanf("%d",&n);

	int i , j;
	for(i=1;i<2*n - 1;i++) {
		if(i%2 == 0){
			printf("\n");
		}
		else if(i%2 == 1) {
			for(j=n - (i+1)/2;j>0;j--){
				printf(" ");
			}
			printf("*");
			for(j=i-2;i>1 && j>0;j--){
				printf(" ");
			}
			if(i>1){
				printf("*");
			}
		}
	}
	
	
	for(i=2*n - 1;i>0;i--){
		printf("*");
	}
	
	printf("\n");
	for(i=2*n - 3;i>0;i--) {
                if(i%2 == 0){
			printf("\n");
		}
                else if(i%2 == 1) {
                        for(j=n - (i+1)/2;j>0;j--){
				printf(" ");
			}
                        printf("*");
                        for(j=i-2;i>1 && j>0;j--){
				printf(" ");
			}
                        if(i>1){
				printf("*");
			}
                }
        }
printf("\n");

	return 0;
}
