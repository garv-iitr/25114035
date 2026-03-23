#include <stdio.h>

int main() {
	int n;
	printf("Enter array size : ");scanf("%d",&n);
	int a[n];
	printf("Enter prefix sum array : ");
	for(int i = 0 ; i < n ; i++) {
		scanf("%d",&a[i]);
	}

	printf("Original array : ");
	for(int i = 0 ; i < n ; i++) {
		if(i == 0) {printf("[%d",a[0]);}
		else {
			printf(", %d",a[i] - a[i-1]);
		}
	}
	printf("]\n");
	return 0;
}
			
