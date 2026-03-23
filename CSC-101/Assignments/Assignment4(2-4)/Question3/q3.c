#include <stdio.h>
#include <math.h>

int main() {
	int n ;
	printf("Alien!! , Please enter the 4 digit number:");
	scanf("%d",&n);
	
	int o , ten , h , t ;
	o = n%10 ;
	ten = ((int)(n-o)/10)%10;
	h = ((int)(n-ten-o)/100)%10;
	t = ((n-h-ten-o)/1000.0);

	if (t+o == ten*h) {
		printf("According to Your Mysterious Rule,, The provided number is accepted\n");
	}

	else if ((o == 2||3||5||7)  &&(t == 2||3||5||7) && ten%2 == 0 && h%2 == 0 ) {
		printf("Accorrding to Your Mysterious Rules,, The provided number should be Considered\n");
	}

	else if (printf("According to Your Mysterious Rules,, The provied number is Rejected\n"))
		return 0;
}
	
