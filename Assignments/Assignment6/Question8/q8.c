#include <stdio.h>

int main() {
	int a ,b ;
	printf("Enter the first integer :");scanf("%d",&a);
	printf("Enter the second integer :");scanf("%d",&b);
	int p = 0 ;
	int i = 1 ;
	while(i <= a){
		p = p + b ;
	i++;
	}
printf("Product : %d\n",p);	
return 0;
}

