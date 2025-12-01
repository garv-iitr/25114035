#include<stdio.h>

int main() {
	int a, b;
	char c ;
	printf("Enter the operation (as a+b) :");
	scanf("%d%c%d",&a,&c,&b);
	
	printf("Result : ");
	switch(c) {
		case '+' :
			printf("%d\n",a + b);
			break;
		case '-' :
			printf("%d\n",a - b);
			break;
		case '*' :
			printf("%d\n",a * b);
			break;
		case  '/' :
			printf("%0.2f\n",(float)a/b);
			break;
		case '%' :
			printf("%d\n",a%b);
			break;
		default : 
			printf("Error!!Enter a valid input.\n");
	}
	return 0;
}
