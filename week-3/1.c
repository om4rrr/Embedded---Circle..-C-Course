#include <stdio.h>
#include <stdlib.h>

int Max_Number(int num1,int num2);

int main()
{
    int num1, num2;
    printf("Enter The Numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("The Maximum Number is %d",Max_Number(num1, num2));
    return 0;
}


int Max_Number(int num1,int num2)
{
       return (num1 > num2) ? num1 : num2;
}
