#include <stdio.h>
#define N 100

void Set_String(char str[])
{
    
    char ch,i=0;
    while((ch = getchar()) != '\n') str[i++]=ch;
    str[i]='\0';
    
}

int count_alphabets(char str[])
{
    int alphabet=0;
    
    for(int i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabet++;
        }
    }
    return alphabet;
    
}


int count_digits(char str[])
{
    int digit=0;
    
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
    }
    return digit;
    
}

int count_SpecialChar(char str[])
{
    int Special_Char=0;
    
    for(int i=0; str[i]!='\0'; i++)
    {
        if(!(str[i]>='0' && str[i]<='9') && !(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z'))
        {
            Special_Char++;
        }
    }
    return Special_Char;
    
}


int main()
{
    char str[N];
    printf("Enter your text : ");
    Set_String(str);
    
    printf("Number of alphabets = %d \n"
    "Number of Digits = %d \n"
    "Number of Special Characters = %d \n",count_alphabets(str),count_digits(str),count_SpecialChar(str));
  
    return 0;
}