#include <stdio.h>

#define MODE 1

int main() {
	if (MODE == 0) {
		printf("LOGGING is enabled\n");
	} else if (MODE == 1) {
		printf("DEBUGGING is enabled\n");
	} else if ( MODE >=1 ) {
		printf("FEATURE-SPECIFIC is enabled\n");
	}

	return 0;
}

