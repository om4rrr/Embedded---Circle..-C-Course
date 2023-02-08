#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Please enter your grade: ");
    scanf("%d",&grade);

    if (grade >= 85)
       printf("Your rate is Excellent");
    else if (grade < 85 &&  grade >= 75)
       printf("Your rate is Very Good");
    else if (grade < 75 &&  grade >= 65)
       printf("Your rate is Good");
    else if (grade < 65 &&  grade >= 50)
       printf("Your rate is Successful");
    else
       printf("Sorry, You are fail");
    return 0;
}
