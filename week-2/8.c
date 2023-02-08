#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter The number: ");
    scanf("%d",&num);

    for(int i = 1; i <=12 ; i++)
    {
        printf(" %d * %d = %d\n",i,num,i*num);
    }
    return 0;
}
