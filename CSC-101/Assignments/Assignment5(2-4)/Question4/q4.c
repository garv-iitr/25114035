#include<stdio.h>
#include<math.h>

int main() {
	int a , r = 0;
	char c;
	

	printf("Input ending with = : \n");
	int x = scanf("%d",&r);
	if(x == 0){
		printf("Error!!Invalid input.\n");
		return 1;
	}

	int y = scanf(" %c",&c);
	if(y == 0){
		printf("Error!!Invalid operator.\n");
	}
	if(c != '='){
		while(1){
			x = scanf("%d",&a);
			if(x == 0){
				printf("Error!!Invalid input\n");
				break;
			}
			switch(c) {
				case '+' : r += a;
					   break;
				case '-' : r -= a;
					   break;
				case '*' : r *= a;
					   break;
				case '/' : if(a == 0){printf("Error!!Divison by 0.\n");return 1;};
					   r /= a;
					   break;
			     	case '%' : if(a == 0){printf("Error!!Modulo by 0.\n");return 1;};
					   r %= a;
					   break;
				case '=' : break;
				default : printf("Error!!Invalid input.\n");
					  return 1;
					  
			}

			scanf(" %c",&c);
			if(c == '='){break;};

		}
	}


	printf("Result = %d\n",r);
	return 0;
}
