#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

int main() {
	char ch;
	printf("Enter the charcater: ");
	scanf(" %c",&ch);

	bool l = islower(ch);
	bool u = isupper(ch);

	ch  = l*(ch - 32) + u*(ch  + 32);

	printf("Converted Chartacter: %C\n",ch);

	return 0;
}

