#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Input validation
    int hours;
    printf("Please enter your working hours: ");
    scanf("%d",&hours);

    int salary = 50 * hours;
    if (hours < 40 )
        printf("Your Salary is %d $",(salary - (salary / 10)));
    else
        printf("Your Salary is %d $",salary);
    return 0;
}
