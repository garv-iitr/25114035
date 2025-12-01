#include <stdio.h>

int main() {
	int n;
	printf("Enter the number :");scanf("%d",&n);

	int temp = n ;
	printf("Using while loop :");

	int d;
	while(temp!=0) {
			d  = temp%10;
			temp =(int)(temp - d)/10 ;
			printf("%d",d);
	}
	
	printf("\n");

	
	
	printf("Using do-while loop:");
	int temp1 = n;
	do {	d = temp1%10;
		temp1 =(int)(temp1 - d)/10 ;
		printf("%d",d);
        	} 	while(temp1 != 0);
	printf("\n");

	
	
	printf("Using for loop :");
	int temp2;
	for(temp2 = n ; temp2 != 0 ; temp2 = (int)(temp2 - d)/10) {	
	       	 d = temp2%10;
		 printf("%d",d);
	}
	printf("\n");


	return 0;
}


	
