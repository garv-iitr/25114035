#include <stdio.h>

int main() {
	int a = 1, b = 1 ;

	while(a > 0) {
		
		printf("%d\n",a);
		a = a + b;
		printf("%d\n",b);
		b = a + b;
	}
	return 0;
}
