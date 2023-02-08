#include <stdio.h>

void find_reapting_elements( int arr[],int s)
{   
    int x=0;
	
	for(int i = 0; i < s; i++)
	{
		 for(int j = i+1; j < s; j++)
	     {    
	         if(i>0){
               if(arr[i]==x) break;
			}
		    if(arr[i] == arr[j])
		    {
			  printf("%d ",arr[i]);
              x=arr[i];			 
              break;			 
		    }
	    }
	}
	
}


void main(void){
	
	printf("\nEnter Size of Array : ");
	int size; scanf("%d",&size);// 11
	int arr[1000]={0};
	printf("\nEnter The Elements of Array : ");
	for(int i = 0; i < size; i++)
		scanf("%d",&arr[i]);// 1 1 2 1 4 5 5 1 7 8 8 
	
	// print reapting elements
	printf("\n<------------Reapting Elements------------>\n");
    find_reapting_elements(arr,size);	
}