#include "cal.h"
void cal(int i, int j, char c){
switch(c){
	case '+' :
	printf("%d + %d is %d\n",i,j,i+j);
	break;
	case '-' :
	printf("%d - %d  is %d\n",i,j,i-j);
	break;
	case '*' :
	printf("%d * %d  is %d\n",i,j,i*j);
	break;
	case '/' :
	printf("%d / %d is %0.2f\n",i,j,(float)i/j);
	break;

}
}
