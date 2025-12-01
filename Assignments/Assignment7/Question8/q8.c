#include <stdio.h>

int main() {
	int n ;
	printf("Enter array size : ");scanf("%d",&n);
	int a[n];
	printf("Enter time-series array : ");
	for(int i = 0 ; i < n ; i++) {
		scanf("%d",&a[i]);
	}
	int sum = 0 , max = 0 , index;
	for(int i = 0 ; i < n ; i++) {
		sum+=a[i] ;
		if(sum < 0) {
			printf("Error!!Invalid Occupancy(due to index %d)\n",i);
			return 0;
		}
		if(sum > max) {
			max = sum ;
			index = i;
		}
	}
	printf("Peak Occupancy : %d , Index(0-based) : %d \n",max,index);
	return 0;
}
