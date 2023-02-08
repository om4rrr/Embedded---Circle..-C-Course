#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ID;
    do
    {
        printf("Enter your ID: ");
        scanf("%d",&ID);

    }while(ID != 1234 && printf("Wrong ID, try again...\n"));

    int password,count = -2;
    do
    {
        printf("Enter your password: ");
        scanf("%d",&password);

    }while (( password != 5555 && count++) && printf("You are not registered\n") );

        if (count == 1)
        {
            printf("No more tries\n");
        }
        else
            printf("Welcome Omar!");
    return 0;
}
