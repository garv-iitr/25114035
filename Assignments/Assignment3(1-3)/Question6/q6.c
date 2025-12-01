#include <stdio.h>
#include <math.h>

int main() {
	int o, t, h, n ;
	printf("Enter the 3-Digit No. : ");
	scanf("%d",&n);

	o = n%10 ;
	t = ((int)(n-o)/10)%10 ;
	h = (n-(t*10)-o)/100.0 ;

	if (n == pow(o,3) + pow(t,3) + pow(h,3)) {printf("The provided number is an Armstrong Number. \n");}
	else if (printf("This number is not an Armstrong number.\n"))

		return 0;
}

