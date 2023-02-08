#include <stdio.h>
#include <stdlib.h>
int main()
{
     int num;
     printf("Enter the number: ");
     scanf("%d",&num);
     if ((num & 1) == 0)
        printf("The Number is even");
     else
        printf("The Number is odd");
    return 0;
}
