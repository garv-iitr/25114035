#include <stdio.h>

int main() {
	int n , i , a , temp , x = 1 , max ;
	printf("Enter N : ");
	scanf("%d",&n);

	if(n < 2 || n > 100) {
				printf("Error!!Enter a valid N(2 <= N <= 100).\n");
				x = 0;
				return 1;
	}
	
	if(x) { 
		scanf("%d",&a);
		if(a < 1){
			x = 0;
			printf("Not Magical. Invalid numbers : %d(1) ",a);
		}
		max = a;
	}
	int y = 1;
	for(i=1;i<n;i++) {
		scanf("%d",&temp);
		max = temp > max ? temp : max ;
			
		if((temp < 1 || a - temp > 1 || temp - a > 1 || a == temp) && y) {
			if(x == 1) {
				printf("Not Magical. Invalid numbers : ");
				x=0;
			}	
			printf("%d(%d) ",temp,i + 1);
			y=0;
		}
		else{
		a = temp ; 
		y =1;
		}

	}

	if(x == 1){
		printf("Magical\nMax : %d\n",max);
	}
	else{printf("\n");}
return 0; 
}
