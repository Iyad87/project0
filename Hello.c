include <stdio.h>

int main(void){
	
	
	int x = 22;
	int y = 5;
	int sum = x *y;
	
	printf(" x is %i\n",x);
		printf(" y is %i\n",y);
		  // swaping code
	 int temp = x; 
	 x = y;
	 y = temp;
	 

	printf(" x is now %i\n",x);
    printf(" y is now %i\n",y);
	printf("the sum is %i",sum);
	
	
return 0;	
}
