#include <stdio.h>
#include <math.h>

int main() {
	double x , y , s ;

	printf("Enter the value of x coordinate:");
	scanf("%lf",&x);
	printf("Enter the value of y coordinate:");
        scanf("%lf",&y);
	
	
	s = (pow(x,2)+pow(y,2));
	
	printf("The Squared distance of point from origin is = %0.2lf\n",s);
	return 0;
}


