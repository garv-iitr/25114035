#include <stdio.h>
int main() {
	int n;
	printf("Enter the value of integer : ");
	scanf("%d",&n);

	int b = n%2;
	switch(b) {
		case 0 :{printf("Entered integer is 'Even'\n");
				break;}
		case 1 : {printf("Entered integer is 'Odd'\n'");
				break;}
		default: printf("Error!!Entered value is not integer.\n");
	}
	return 0;
}

