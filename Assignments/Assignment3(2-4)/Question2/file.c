#include<stdio.h>
#include<math.h>

int main () {
	double p, t ;
	
	printf("Enter the principal value(P):");
	scanf(" %lf",&p);

	printf("Enter the time period(t):");
	scanf(" %lf",&t);

	float x = 1 +(9.0/500) ;
	double A = p*pow(x,5*t);
	
	printf("The Final Amount = %.2lf \n",A);

	return 0;
}
