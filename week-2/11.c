#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;

   printf("Enter The Height of Pyramid : ");
   scanf("%d",&n);

   for (int i =1; i <= n; i++)
   {
        for (int j = 1 ; j <= (2*n - 1); j++)
        {
            if(j >= n-(i-1) && j <= n+(i-1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
