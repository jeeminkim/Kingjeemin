#include "swap.h"

int main(void){
	int i,j;
	printf("input two number");
	scanf("%d %d",&i,&j);
	printf("before : %d,%d\n",i,j);
	swap(&i,&j);
	printf("after : %d,%d\n",i,j);
	return 0;
}
