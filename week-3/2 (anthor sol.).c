#include <stdio.h>
#include <stdlib.h>

int x , y;

int main()
{
   printf("Enter the value of x and y: ");
   scanf("%d%d",&x,&y);

   printf("<--------------Before Swapping-------------->\n");
   printf(" x = %d, y = %d\n", x, y);

   swap(x, y);

   printf("<--------------After Swapping-------------->\n");
   printf("x = %d, y = %d\n", x, y);

    return 0;
}

void swap(void)
{
   int temp;

   temp  = y;
   y = x;
   x = temp;
}
