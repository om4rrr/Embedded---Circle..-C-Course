#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Please enter the three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if (num1 > num2)
    {
        if (num1 > num3)
            printf("The Maximum number is %d",num1);
        else
            printf("The Maximum number is %d",num3);
    }
    else if (num2 > num1)
    {
        if (num2 > num3)
            printf("The Maximum number is %d",num2);
        else
            printf("The Maximum number is %d",num3);
    }
    return 0;
}
