#include <stdio.h>
#include <stdbool.h>
#define N 100

FILE *fp1; FILE *fp2;


int Search(char str[],int n, char var)
{
    for(int i = 0; i < n; i++)
    {
        if(str[i] == var) return i;
        
    }
}


int main()
{
	
	fp1 = fopen("file_IO.txt","a");
	
    fprintf(fp1,"Enter your text : ");
	fclose(fp1);
	fp1 = fopen("file_IO.txt","a");
    char ch;
     while( (ch = getchar()) != EOF) {
        putc(ch, fp1);
    }
	fclose(fp1);
    int size = 4;

    
    char var;
	fp1 = fopen("file_IO.txt","a");
    fprintf(fp1,"Enter character to search : ");
	fclose(fp1);
	fp1 = fopen("file_IO.txt","a");
	var = fgetc(fp1);
	fclose(fp1);
    
    int loc = Search(str,size,var);
    
    if(loc >= 0 && loc < size)
	{
		fp1 = fopen("file_IO.txt","a");
        fprintf(fp2,"'%c' is found at index %d",var,loc);
	    fclose(fp1);
	}
    else 
	{
		fp1 = fopen("file_IO.txt","a");
        fprintf(fp2,"'%c' is not found",var);
		fclose(fp1);
	}
    
 
    return 0;
}
