#include<stdio.h>

int main() {
	int n;
	printf("Enter the array size n :");scanf("%d",&n);
	printf("Enter the elements of array : \n");
	int arr[n];
	for(int i = 0;i < n ;i++){
		scanf("%d",&arr[i]);
		if((arr[i] > n-1) || (arr[i]<1)){printf("Error!!Numebrs in array are from [1,n-1].\n");
			return 0;
		}
	}
	int sum , total;

	for(int i = 0; i < n ;i++){
		total += arr[i];
		sum += i;		
	}	
	

	printf("Repeated number : %d \n",total-=sum);


	return 0;
}

