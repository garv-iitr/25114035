#include <stdio.h>

int main() {
	int n ;
	printf("Enter the array size(n) : ");scanf("%d",&n);
	int arr[n];
	printf("Enetr the elements of array : ");
	int i;
	for(i = 0 ; i < n ;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the position(0 to n-1) of element to be removed : ");
	scanf("%d",&i);

	int arr1[n-1];
	printf("The output array : ");
	for(int j = 0 ; j < n - 1 ;j++){ 
		if(j < i){
			arr1[j] = arr[j];
		}
		else if(j >=  i){
			arr1[j] = arr[j+1];
		}
		printf("%d ",arr1[j]);
	}
	printf("\n");
	return 0;
}
