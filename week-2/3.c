#include <stdio.h>
#include <stdlib.h>
int main()
{
   int ID;
   printf("Please enter your ID: ");
   scanf("%d",&ID);
   switch (ID)
   {
       case 1234: printf("Welcome Harry !");
       break;
       case 5678: printf("Welcome Ron!");
       break;
       case 1145: printf("Welcome Hermione!");
       break;
       default: printf("Wrong ID");
   }
    return 0;
}
