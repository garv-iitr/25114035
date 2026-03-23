#include<stdio.h>

int main() {
	 int a , b;
        printf("Enter the first integer:");
        scanf("%d",&a);
        printf("Enter the second integer:");
        scanf("%d",&b);

        int i;
        int HCF;

        for(i = 1; i<=a, i<=b ; i++)  {
                int x = a%i , y = b%i ;
                if(x == 0 && y == 0) {
                         HCF = i;
                }
        }
	
	if(HCF == 1) {
		printf("Given numbers are \"Relatively Prime\".\n");
	}
	else {printf("Not \"Relatively Prime\" as HCF = %d\n",HCF);}

	return 0;
}
