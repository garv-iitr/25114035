#include <stdio.h>

int main() {
	int a,b;

	printf("Array 1 size : ");scanf("%d",&a);
	int arr1[a];
	printf("Enter array 1 distinct elements : ");
	for(int i = 0;i < a ;i++){
                scanf("%d",&arr1[i]);
                }
	for(int i = 0; i < a ; i++){
		for(int j = i + 1;j < a; j++){
			if(arr1[i] == arr1[j]){
				printf("Error!!Enter distinct elements.\n");
				return 0;
			}	
		}
	}

	printf("Array 2 size : ");scanf("%d",&b);
	int arr2[b];
        printf("Enter array 2 distinct elements :");
        for(int i = 0;i < b ;i++){
                scanf("%d",&arr2[i]);
                }
	for(int i = 0; i < b ; i++){
		for(int j = i + 1;j < b; j++){
			if(arr2[i] == arr2[j]){
				printf("Error!!Enter distinct elements.\n");
				return 0;
			}
		}
	}

	int c = 0, arr3[a+b] ;
	for(int i = 0; i < a ; i++){
		for(int j = 0;j<b;j++){
			if(arr1[i] == arr2[j]){
				c++;
			}
		}
	}
	int d = 0 , inter[c] , uni[a+b-c] , e = c ;
	for(int i = 0 ;i < a + b;i++){
		if(i<a){arr3[i] = arr1[i];}
		else {arr3[i] = arr2[i-a];}
	}
	for(int i = 0;i< a+b;i++){
		for(int j = i+1;j<a+b;j++){
			if(arr3[i] > arr3[j]) {
				int temp = arr3[i];
				arr3[i]  = arr3[j];
				arr3[j] = temp ;
			}
		}
	}
	for(int i = 0 ; i < a + b  ;i++) {
		if(arr3[i] == arr3[i+1]) {
			inter[--c] = arr3[i];
			uni[d++] = arr3[i];
			i++;
		}
		else {
			uni[d++] = arr3[i];
		}
	}

	printf("Intersection : ");
	for(int i = e-1 ; i >= 0;i--) {
		printf("%d ",inter[i]);
	}
	printf("\nUnion : ");
	for(int i = 0 ;i < a + b - e; i++) {
		printf("%d ",uni[i]);
	}
	printf("\n");
	return 0;
}

