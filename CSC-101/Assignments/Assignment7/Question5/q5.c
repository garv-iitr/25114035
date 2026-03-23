#include<stdio.h>

int main() {
	int a , b ;

	printf("Enter array 1 size : ");scanf("%d",&a);
	printf("Enter array 1 elememts : ");
	int arr1[a];
	for(int i = 0; i < a;i++){
		scanf("%d",&arr1[i]);
	}

	printf("Enter array 2 size : ");scanf("%d",&b);
	printf("Enter array 2 elememts : ");
	int arr2[b];
	for(int i = 0; i < b;i++){
		scanf("%d",&arr2[i]);
	}
	
	int arr3[a+b];
	for(int i = 0 ; i < a + b ; i++) {
		if(i<a){arr3[i] = arr1[i];}
		else {arr3[i] = arr2[i-a];}
	}

	for(int i = 0 ; i < a + b ; i++) {
		for(int j = i + 1 ; j < a + b ; j++) {
			if(arr3[i] > arr3[j]) {
				int temp = arr3[i];
				arr3[i] = arr3[j];
				arr3[j] = temp;
			}
		}
	}
	printf("Output array : \n\t\t");
	for(int i = 0 ; i < a + b ; i++) {
		printf("%d ",arr3[i]);
	}
	printf("\n");
	return 0;
}
