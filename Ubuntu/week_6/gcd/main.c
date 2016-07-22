#include "gcd.h"
int main()
{
	int num1,num2=0;
	while(1){
	printf("input two numbers:");
	scanf("%d %d",&num1,&num2);
	gcd(&num1,&num2);
	printf("gcd between %d,%d is %d\n",num1,num2,gcd(&num1,&num2));
}	return 0;
}
