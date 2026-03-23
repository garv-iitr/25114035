#include <stdio.h>

int main() {
	int n ;
	printf("Enter array size(n) : ");scanf("%d",&n);
	float a[n] , t;
	printf("Enter array elements : ");
	for(int i = 0 ; i < n ; i++) {
		scanf("%f",&a[i]);
	}
	printf("Enter threshold(T) : ");scanf("%f",&t);
	printf("Anamalous readings : ");
	for(int i = 1 ; i < n - 1 ; i++) {
		float x = a[i] - (a[i-1] + a[i+1])/2.0 ;
		if((x > t) || (x < -t)) {
			printf("%.2f(%d) ",a[i],i+1);
			a[i] = a[i] - x ;
		}
	}
	printf("\nCorrected readings : ");
	for(int i = 0 ;i < n ;i++) {
		printf("%.2f ",a[i]);
	}
	printf("\n");
	return 0;
}
