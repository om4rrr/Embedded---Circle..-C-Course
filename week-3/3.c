#include <stdio.h>
#include <stdlib.h>

int number_of_digits(int num);

int main()
{
    int num;
    printf("Enter The Number: ");
    scanf("%d",&num);
    printf("Number of digits is : %d", number_of_digits(num));
    return 0;
}

int number_of_digits(int num)
{
    static int counter=0;
    if(num>0)
    {
       counter=counter+1;
       return number_of_digits(num/10);
    }
    else
    return counter;
}
