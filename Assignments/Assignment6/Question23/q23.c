#include<stdio.h>

int main() {
	int n ;
	printf("Enter the value of n :");scanf("%d",&n);

	int i , sum = 0;
	for(i=1 ;i<=n;i++) {
		if(i%2 == 1){sum += i;printf("+%d",i);}
		else if(i%2 == 0){sum -= i;printf("-%d",i);}
	}
	printf(" = %d\n",sum);
	return 0;
}

