#include "fact.h"

int main(void){
int num=0;
printf("input number:");
scanf("%d",&num);

fact(num);
printf("%d\n",fact(num));
return 0;
}
