#include<stdio.h>

int main() {
	int a , b;
	printf("Enter the first integer:");
	scanf("%d",&a);
	printf("Enter the second integer:");
	scanf("%d",&b);

	int i;
	int HCF;	
	
	for(i = 1; i<=a, i<=b ; i++)  {
		int x = a%i , y = b%i ;
		if(x == 0 && y == 0) {
			 HCF = i;
		}
	}
	printf("HCF : %d\n",HCF);
	printf("LCM : %d\n",(a*b)/HCF);
	return 0;
}
				

