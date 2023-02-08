#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main()
{
   int x, y;

   printf("Enter the value of x and y: ");
   scanf("%d%d",&x,&y);

   printf("<--------------Before Swapping-------------->\n");
   printf(" x = %d, y = %d\n", x, y);

   swap(&x, &y);

   printf("<--------------After Swapping-------------->\n");
   printf("x = %d, y = %d\n", x, y);

   return 0;
}

void swap(int *a, int *b)
{
   int temp;

   temp  = *b;
   *b = *a;
   *a = temp;
}
