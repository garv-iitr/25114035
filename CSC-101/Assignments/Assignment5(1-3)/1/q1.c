#include <stdio.h>

int main() {
	int n ;
	printf("Enter n :");scanf("%d",&n);

	int i , j ;
	for(i=1;i<=n;i++) {
		if(i%2 == 1) {
			for(j=n*i - n + 1;j<=n*i;j++){printf("\t%d",j*j);};
			printf("\n");
		}
		else if(i%2 == 0){
			for(j=n*i;j>n*i - n;j--){printf("\t%d",j*j);};
			printf("\n");
		}
	}
	return 0;
}

