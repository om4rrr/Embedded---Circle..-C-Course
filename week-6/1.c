#include <stdio.h>
#define N 100

void Set_String(char str[])
{
    
    char ch,i=0;
    while((ch = getchar()) != '\n') str[i++]=ch;
	str[i]='\0';
    
}

void To_Upper(char str[])
{
        for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
    
}


void To_Lower(char str[])
{
        for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
    
}

int main()
{
    char str[N];
    printf("Enter your text : ");
    Set_String(str);
    
    int check;
    do
    {
        
        printf("\nIF you want to convert string form --> lowercase to uppercase enter 1  ");
        printf("\n                                   --> uppercase to lowercase enter 0  \n");
        scanf("%d",&check);
    
    }while( !(check == 1 || check == 0 ) && printf("\nInvaild Number, Try again...\n") );
    
    if(check == 1) 
    {
        To_Upper(str);
        printf("\nUppercase Text : %s",str);
        
    }
    else{
    
        To_Lower(str);
        printf("\nLowercase Text : %s",str);
        
    }
    return 0;
}