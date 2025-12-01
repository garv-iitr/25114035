#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("For the given NxN chessboard,, Enter the value of N:");
	scanf("%d",&n);
	
	int r, c ;
	printf("Enter initial posotion (row,column) as r  c  ");
	scanf("%d %d",&r,&c);
	
	int x = 1;
	if (r<1||r>n||c<1||c>n) {
                printf("Error!!Enter a valid initial position.\n");
                x = 0;
        }
	if (x==1){
	int k ;
	printf("Enter the number of maximum moves(K) :");
	scanf("%d",&k);
	 

		if (k==10 && x==1 && r-2 >= 1 && c-1 >= 1) {
	      r -= 2;	           c -= 1;	        k = 9;	      x = 1;
		}

		if (k==9 && x==1 && r-2 >= 1 && c-1 >= 1) {
              r -= 2;              c -= 1;              k = 8;	      x = 1;
                }

		if (k==8 && x==1 && r-2 >= 1 && c-1 >= 1) {
              r -= 2;              c -= 1;              k = 7;	      x = 1;
                }

		if (k==7 && x==1 && r-2 >= 1 && c-1 >= 1) {
              r -= 2;              c -= 1;              k = 6;	      x = 1;	
                }

		if (k==6 && x==1 && r-2 >= 1 && c-1 >= 1) {
              r -= 2;              c -= 1;              k = 5;        x = 1; 
                }

		if (k==5 && x==1 && r-2 >= 1 && c-1 >= 1) {
              r -= 2;              c -= 1;              k = 4;	      x = 1;	
                }

		if (k==4 && x==1 && r-2 >= 1 && c-1 >= 1) {
              r -= 2;              c -= 1;              k = 3;        x = 1;
                }

		if (k==3 && x==1 && r-2 >= 1 && c-1 >= 1) {
              r -= 2;              c -= 1;              k = 2;        x = 1;
                }

		if (k==2 && x==1 && r-2 >= 1 && c-1 >= 1) {
              r -= 2;              c -= 1;              k = 1;        x = 1;
                }

		if (k==1 && x==1 && r-2 >= 1 && c-1 >= 1) {
              r -= 2;              c -= 1;                            x = 1;
                }
		
		printf("The final position is (%d,%d)\n",r,c);
		if (x==1) {
		int b = (r+c)%2;
				printf("The color of final square is ");
			if (b==0) {
				printf("Black\n");
			}
			else {printf("White\n");}
		}
	}
			return 0;
}




		
	
