#include<stdio.h>
#include<math.h>

int main() {
	int x, y, n ;
	printf("In NxN Chessboard ,, Enter the value of N:");
	scanf("%d",&n);
	printf("Enter the x coordinate:");
	scanf("%d",&x);
	printf("ENter the y coordinate:");
	scanf("%d",&y);

	if (x<=n && y<=n) {
		int s = x +y ;
		if (s%2 == 1) {printf("The Color of Box is White\n");}
		else if( s%2 == 0) {printf("The Color Of Box is Black\n");}
	}
	else if (printf("Error , Enter the correct values of coordinates.\n")
		)

	return 0;
}



