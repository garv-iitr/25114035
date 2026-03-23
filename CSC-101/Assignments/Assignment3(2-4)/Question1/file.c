#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main() {
	double r;
	printf("Enter the value of radius(r):");
	scanf("%lf",&r);
	float a, c, d;
	a = PI*pow(r,2);
	c = 2*PI*r;
	d = 2*r;

	printf("Area of this circle(a) = %f \n",a);
	printf("Circumference of this circle(c) = %f \n",c);
	printf("Diameter of this circle()d = %f \n",d);

	return 0;
}
