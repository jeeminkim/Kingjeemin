#include "cal.h"

int main(void){
	int i,j;
	char c;
	while(1){
	printf("input two numbers and operator:");
	scanf("%d %d %c",&i,&j,&c);
	cal(i,j,c);
}
}	
