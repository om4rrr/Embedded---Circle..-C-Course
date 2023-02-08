#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    do
    {
        printf("Enter the number: ");
        scanf("%d",&num);

    }while(num < 0 && printf("Invalid, Try again...\n"));

    int i = num ,fac = 1;
        while (i != 0)
        {
               fac *= i;
               i--;
        }
        if (num == 0) fac =1;
    printf("The Factorial of %d = %d",num,fac);
    return 0;
}
