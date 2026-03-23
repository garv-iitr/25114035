#include <stdio.h>

int main() {
	int n , i = 2 ;
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	int temp1 ,temp2 ;
        printf("Enter the numbers:\n\t\t");	
	scanf("%d",&temp1);
	
	while(i <= n) {
		printf("\t\t");
		scanf("%d",&temp2);
		if(temp2 > temp1) {
			temp1 = temp2;
		}
		i++;
	}
	
	printf("The Maximum of the numbers is :%d\n",temp1);
	
	return 0;
}

