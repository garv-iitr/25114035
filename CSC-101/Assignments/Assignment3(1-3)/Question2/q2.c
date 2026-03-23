#include <stdio.h>
#include <math.h>

int main() {
	int n ;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	int o , t , h  ;
	
	o = n%10 ;
	t = ((int)(n-o)/10)%10 ;
	h =(int)(n-(10*t)-o)/100 ;
	
	printf("Reversed Number : %d%d%d \n",o,t,h);
	return 0;
}

