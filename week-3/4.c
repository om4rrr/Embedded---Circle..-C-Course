#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Check_ID();
int Check_Password();
int main()
{
    int test1 = Check_ID(); int test2 = Check_Password();
    if (test1 == 1 &&  test2 == 1)
        printf("Welcome");
    else if (test1 == 0 && test2  == 1)
        printf("The ID is Wrong");
    else if (test1 == 1 &&  test2 == 0)
        printf("The Password is Wrong");
    else
        printf("Sorry");
    return 0;
}

int Check_ID()
{
    char id[40];
    printf("Enter your id: ");
    scanf("%s", &id);
    if (strcmp(id,"admin")==0) return 1;
    else return 0;
}

int Check_Password()
{
    char password[40];
    printf("Enter your password: ");
    scanf("%s", &password);
    if (strcmp(password,"admin4444") == 0) return 1;
    else return 0;
}
