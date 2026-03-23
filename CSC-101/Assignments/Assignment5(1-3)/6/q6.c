#include <stdio.h>

int main() {
	int n ;
	printf("Enter number of rows : ");
	scanf("%d",&n);

	int i ;

	for(i=1 ;i<=n;i++) {
		int j;
		for(j=3*(n-i);j>0;j--){printf(" ");}
		if(i != 1){printf("%3d   ",1);}
		for(j=2;j<i;j++){
			int a = 1 , b = 1 , k , d = i-1 , e = 1 ;
			for(k=j-1;k>0;k--){
				a*=d;
				d--;
				b*=e;
				e++;
			}
			printf("%3d   ",a/b);
		}
		printf("%3d\n",1);
	}
		return 0;
}
