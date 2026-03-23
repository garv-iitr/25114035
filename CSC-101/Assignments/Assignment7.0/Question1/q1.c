#include <stdio.h>

int main() {
	int n ;
	printf("Enter array size : ");scanf("%d",&n);

	int arr[n];
	printf("Enter array elements : ");
	for(int i = 0 ; i < n ; i++ ) {
		scanf("%d",&arr[i]);
	}


	//Finding majority function 
	int current , max , valid = 0 ;

	for(int i = 0 ; i < n ; i++ ) {
		for(int j = i + 1 ; j < n ; j++ ) {
			if(arr[i] == arr[j]) {
				current++;
			}
		}
		if(current > n/2) {
			max = arr[i];
			valid = 1;
		       break;
		}	       
	}
	
	if(valid == 1) {
		printf("Majority element is : %d. \n",max);
	}
	else {
		printf("No majority element.\n");
	}

	return 0;
}
