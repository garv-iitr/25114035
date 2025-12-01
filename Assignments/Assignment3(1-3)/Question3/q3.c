#include<stdio.h>
#include<math.h>

int main() {
	float t ;
	printf("Enter the temperature (in Celsius): ");
	scanf("%f",&t);
	
	float f =((9.0/5)* t) + 32;
	printf("The Value of Temperature (In farenheit) = %0.3f\n",f);
	
	return 0;
}

