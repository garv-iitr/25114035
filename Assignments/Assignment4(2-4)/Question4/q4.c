#include<stdio.h>
#include<math.h>

int main() {
	int a , b , c ,n ;
	printf("Enter the 3 digit number:");
	scanf("%d",&n);
	
	c = n%10 ;
	b = ((int)(n-c)/10)%10 ;
	a = (int)(n-b-c)/100 ;

	if ((a+b+c)%15 == 0 && a<b && b<c) {
		printf("This Number is Magical\n");
	}
	else if ((a*b*c)%2 == 0 && a>b && b>c) {
		printf("The Number is Mystical\n");
	}
	else if (a==c) {
		printf ("The Number is Enigma \n");
	}
	else if (printf("This as an Ordinary number\n"))
		return 0;
}

