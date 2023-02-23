#include <stdio.h>
#include <stdbool.h>
#define N 100

int Set_String(char str[])
{
    
    char ch,i=0;
    while((ch = getchar()) != '\n') str[i++]=ch;
    str[i]='\0';
    return i-1;
}

int Search(char str[],int n, char var)
{
    for(int i = 0; i < n; i++)
    {
        if(str[i] == var) return i;
        
    }
}


int main()
{
    char str[N];
    printf("Enter your text : ");
    int size = Set_String(str);
    
    char var;
    printf("Enter character to search : ");
    scanf("%c",&var);
    
    int loc = Search(str,size,var);
    
    if(loc >= 0 && loc < size)
        printf("'%c' is found at index %d",var,loc);
    else 
        printf("'%c' is not found",var);
    
  
    return 0;
}
