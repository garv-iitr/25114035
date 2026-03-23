#include<stdio.h>
#include<math.h>

int main() {
	float w , h;
	printf("Enter the weight(in kgs):");
	scanf("%f",&w);

	printf("Enter the height(in m):");
	scanf("%f",&h);

	float BMI = (float)w/(h*h) ;
	printf("Your BMI is:%f and ",BMI);
	if (BMI < 18.5) {
		printf("You Are Underweight\n");
	}
	else if (BMI >= 18.5 && BMI < 25) {
		printf("Normal Weight\n");
	}
	else if (BMI >=25 && BMI <30) {
	       printf("You are Overweight\n");
	}
	else if (BMI >= 30) {
	printf("You are suffering from obesity\n");	
	}
	return 0;
}

