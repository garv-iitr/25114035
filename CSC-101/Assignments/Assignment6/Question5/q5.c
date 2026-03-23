#include<stdio.h>

int main() {
	int m;
	printf("Enter the number code for month:");
	scanf("%d",&m);

	switch(m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:	
			printf("Given month has 31 days.\n");
			break;
					    
		case 2: 
			printf("Given month has 28 days.\n");
			break;
			 
		case 4:
		case 6:
		case 9:
		case 11:	
			  printf("Given month has 30 days.\n");  
			  break;
		default : printf("Error!! Invalid month.\n");
	}
	return 0;
}
