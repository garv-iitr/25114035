#include<stdio.h>
#include<math.h>

int main() {
	int i = 1;
	while(i <= 100000) {
		int d = 1;
		int sum = 0;
			while (d < i){
				if ( i%d == 0 ) {sum = sum + d ;}
				d++;	
			}
	 	if (sum == i) {printf(" %d \n",i);}

		i++;}

	return 0;
}


