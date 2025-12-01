#include<stdio.h>
#include<math.h>

int main() {
	float a , b , c , D ;
	printf("Enter coefficient of x²: ");scanf("%f",&a);
	printf("Enter coefficient of x : ");scanf("%f",&b);
	printf("Enter the constant     : ");scanf("%f",&c);

	D = b*b - 4*a*c ;
	float x = (-b + sqrt(D))/(2*a);
	float y = (-b - sqrt(D))/(2*a);
	if(D > 0){
		printf("Real and Distinct\n");
		printf("Roots of given quadratic equation are %.2f , %.2f \n",x,y);
	}
	else if(D == 0){printf("Real and Equal\n");
		printf("Roots of given quadratic equation are %.2f , %.2f \n",x,y);
	}
	
	else if(D < 0){printf("Imaginary roots.\n");}

	return 0;

} 
