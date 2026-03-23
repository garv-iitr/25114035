#include <stdio.h>
#include <math.h>

int main() {
	int n ;
	printf("Enter the 3 Digit Number:");
	scanf("%d",&n);
	int a,b,c ;
	c = n%10;
	b = (int)(n%100)/10;
	a = (int)n/100 ;
	int x = 0;
	if (n >= 100 && n <= 999) {
	if (n== pow(a,3) + pow(b,3) + pow(c,3)) {
		printf("Armstrong\n");
		x = 1;
	}
	if (a==c) {
		printf("Palindrome\n");
		x = 1;
	}
	if ((a==1||a==8||a==9||a==6) && (b==0||b==1||b==8) && (c==0||c==1||c==6||c==8||c==9)) {
		if ((a==6 && c == 9)||(a==9 && c==6)) {printf("Mirror\n");x =1;}
		else if ((a==c) && (a!=6||a!=9) && (c!=6||c!=9)) {printf("Mirror\n");x = 1;}		
	}
  	if (x==0) {
		printf("None\n");
	}
	}
	else {printf("Error!!Number doesn't have 3 Digit\n");}
	return  0;
}



