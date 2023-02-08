#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    do
    {
        printf("Please Enter the result of 4 * 3 = ");
        scanf("%d",&x);
        if(x == 12)
        printf("Thanks");

    } while(x != 12 && printf("Try again\n"));

    return 0;
}
