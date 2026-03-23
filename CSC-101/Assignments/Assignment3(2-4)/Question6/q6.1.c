#include <stdio.h>

int main() {
	char q = 'a' , w = 'b' , e = 'c' , r = 'd' , t = 'e' ;

	printf(" %5c \n",q);
	printf(" %4c%c \n",q,w);
	printf(" %3c%c%c \n",q,w,e);
	printf(" %2c%c%c%c \n",q,w,e,r);
	printf(" %c%c%c%c%c \n",q,w,e,r,t);

	return 0;
}

