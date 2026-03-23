#include<stdio.h>

int main() {
	int x , y , z ;
	printf("1. Bus      - ₹5  per km \n");
	printf("2. Car      - ₹10 per km \n");
	printf("3. Train    - ₹3  per km \n");
	printf("4. Flight   - ₹50 per km \n");
	
	printf("Choose mode of transport (for Bus ,press 1) : ");scanf("%d",&x);
	
	printf("Enter the distance (in kilometers) :");scanf("%d",&y);
	
	switch(x) {
	
		case 1 : 
			z = 5 * y ;
			printf("Mode of transport : Bus \nDistance : %d\nTotal Cost : ₹%d\n",y,z);
			break;
		case 2 : 
			z = 10 * y ;
			printf("Mode of transport : Car \nDistance : %d\nTotal Cost : ₹%d\n",y,z);
			break;
		case 3 : 
			z = 3 * y ;
			printf("Mode of transport : Train \nDistance : %d\nTotal Cost : ₹%d\n",y,z);
			break;
		case 4 : 
			z = 50 * y ;
			printf("Mode of transport : Flight \nDistance : %d\nTotal Cost : ₹%d\n",y,z);
			break;
		default : printf("Error!!Enter a valid mode of transport/distance.\n");
	}
	return 0;
}
