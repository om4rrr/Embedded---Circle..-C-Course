#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10],sum = 0;
    for (int i = 0;i < 10 ;i++)
    {
        printf("Please Enter the number %d : ",i+1);
        scanf("%d",&array[i]);
        sum += array[i];
    }
    printf("The summation is %d and The Average is %.2f",sum,(sum / 10.0));
    return 0;
}
