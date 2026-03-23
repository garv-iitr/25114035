#include <stdio.h>
#include<math.h>

int main() {
	int t ;
	printf("Enter the time(in seconds):");
	scanf("%d", &t);

	int h = t/3600 ;
	int m = (t - h*3600)/60 ;
	int s = t - (h*3600  + m*60);

	printf("Converted Time: %d hours , %d minutes , %d seconds \n",h,m,s);

	return 0;
}

