#include <stdio.h>


void main(void){
	
	int var = 10;
	printf("%d\n",var);
	int *p = &var;
	*p = 20;
	printf("%d\n",var);
}