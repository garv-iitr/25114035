#include <stdio.h>
#include <math.h>

int main() {
	int n ;
	printf("Enter the decimal number : ");scanf("%d",&n);
	
	int x = log(n)/log(16);
	
	for(;x >= 0;x--){
		int y = n/((int)pow(16,x));
		n = (n % (int)pow(16,x)) ; 
		switch(y) {
			case 10 : printf("A");
				  break;
			case 11 : printf("B");
				  break;
			case 12 : printf("C");
				  break;
			case 13 : printf("D");
				  break;
			case 14 : printf("E");
				  break;
			case 15 : printf("F");
				  break;
			default : printf("%d",y);
		}
	}
	printf("\n");
		return 0;
}
