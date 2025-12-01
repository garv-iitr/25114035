#include<stdio.h>
#include<math.h>

int main() {
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	int i;

	for(i=0;n%2 != 1;i++){
		n = (int)n/2;
	}
	if(n == 1){
	printf("Given number is 2 raised to the power %d.\n",i);
	}
	
	else {printf("Given number is not a power of 2.\n");}

	int j;

	for(j = 1 ; j < 51 ; j++){
		long long int p = pow(2,j);
		printf("2 ^ %d = %lld.\n",j,p);
	}
	return 0;
}


