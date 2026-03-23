#include<stdio.h>

int main() {
	int n , k;
	
	printf("Enter array size : ");scanf("%d",&n);
	
	int a[n], i ,max ;
	printf("Enter elements of array : ");	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter window size :");scanf("%d",&k);
		
	
	printf("Ouptut array : ");
	for(int i = 0 ; i < n - k + 1 ; i++){
		max = a[i];
		for(int j = i ; j < i + k ; j++){
			if(a[j] > max) {
				max = a[j];
			}
		}
		printf("%d ",max);
	
	}

	printf("\n");
	return 0;
}
