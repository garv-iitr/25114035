#include<stdio.h>
#include<math.h>

int main() {
	int A,B,C ;

	printf("Enter the Weight of Coins \n");
	printf("A:"); scanf("%d",&A);
	printf("B:"); scanf("%d",&B);
	printf("C:"); scanf("%d",&C);
	
	if (A!=B && B!=C && C!=A) {printf("Error!! All values are different\n");}
	if (A==B && B==C) {printf("Error!!All the weights are equal.\n");}
	else if (A==B) {
		{printf("A and B are equal.\n");}
		if (A>C) {printf("C is lighter.\n");}
		if (A<C) {printf("C is heavier.\n");}
	}
	else if (A==C) {
		{printf("A and C are equal.\n");}	
		if (A>B) {printf("B is lighter.\n");}
		if (A<B) {printf("B is heavier.\n");} 
	}
	else if (B==C) {
		{printf("B and C are equal.\n");}
		if (A>C) {printf("A is heavier.\n");}
		if (A<C) {printf("A is lighter.\n");}
	}
	return 0;
}
