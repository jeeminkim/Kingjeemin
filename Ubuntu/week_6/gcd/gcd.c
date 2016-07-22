#include "gcd.h"

int gcd(int *num1,int *num2){
int remain=0;
if(*num1>*num2)
{
	if(*num1%*num2==0)
	remain=*num2;
	else
	{
	remain=*num1%*num2;
	while(*num2%remain!=0)
	remain=*num2%remain;
	}
}
else
{
	if(*num2%*num1==0)
	remain=*num1;
	else{
	remain=*num2%*num1;
	while(*num1%remain!=0)
	remain=*num1%remain;	
}

}
	return remain;
}
