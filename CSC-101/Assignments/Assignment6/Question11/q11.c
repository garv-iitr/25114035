#include<stdio.h>

int main() {
	int a ,b ;
	char c ;

	printf("Enter the operation : ");scanf("%d%c%d",&a,&c,&b);
	printf("Result : ");
	if(c == '+'){
		printf("%d\n",a + b);
	}
	else if(c == '-'){
		printf("%d\n",a - b);
	}
	else if(c == '*'){
		printf("%d\n",a * b);
	}
	else if(c == '%'){
		printf("%d\n",a % b);
	}
	else if(c == '/'){
		printf("%0.2f\n",(float)a/b);
	}
	else {printf("Error!!Enter a valid input.\n");}

	return 0;
}
