#include <stdio.h>

int main() {
	int n;
        printf("Enter the array size n :");scanf("%d",&n);
        printf("Enter the elements of array : \n");
        int a[n];
        for(int i = 0;i < n ;i++){
                scanf("%d",&a[i]);
                }
	int x = 1;
	for(int i = 0; i < n;i++){
		for(int j = i + 1;j < n;j++){
			if(a[j] == a[i] && x){
				printf("True\n");
				x = 0;
			}
		}
	}
	if(x){
		printf("False\n");
	}
			

	return 0;
}
