#include <stdio.h>


int sum(int *ptr1, int *ptr2){
	
    return *ptr1 + *ptr2;
}
	
void main(void){
	
	int var1,var2;
	printf("Enter The Variables : ");
	scanf("%d %d",&var1,&var2);
	printf("%d + %d = %d\n",var1,var2,sum(&var1, &var2));
}