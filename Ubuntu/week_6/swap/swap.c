#include "swap.h"
void swap(int *i, int *j){
int temp;
temp=*j;
*j=*i;
*i=temp;
}
