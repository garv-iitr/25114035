#include <stdio.h>
#include <math.h>

int main() {
	int n ;
	printf("Enter the 4 Digit Number:");
	scanf("%d",&n);

	int a,b,c,d ;

	d = n%10 ;
	c =(int)(n%100)/10 ;
	b =(int)(n%1000)/100 ;
	a =(int)n/1000 ;
	
	int e = a%2 + b%2 + c%2 + d%2 ;
	if (a+b > c+d) { printf("Up\n"); }
	if (a+b < c+d) { printf("Down\n"); }
	if (a+b == c+d && e < 2) { printf("Left\n"); }
	if (a+b == c+d && e > 2) { printf("Right\n"); }
	if (e == 2) {printf("Stay\n");}

	return 0;
}

