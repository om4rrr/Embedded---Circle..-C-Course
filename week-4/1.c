#include <stdio.h>

void main(void){
	
	int arr[1000]={0};
	int temp=0;
	printf("Enter Size of Array : ");
	int size; scanf("%d",&size);
	printf("\nEnter elements of Array :");
	for(int i =0; i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int x;
	do
	{
		printf("\nEnter 0 for ascending or Enter 1 for descending : ");
	    scanf("%d",&x);
	
	}while((x != 0 && x != 1 ) && printf("\nInvaild Number, Try Again..."));
	
	
	if( x == 0)
	{
	// ascending
	for(int i = 0; i < size; i++)
	{
		for(int j = i; j < size; j++)
		{
			if(i==j) continue;
		    if(arr[i] > arr[j] ) 
			{
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	} 
	}
	else if(x == 1)
	{
	// descending
		for(int i = 0; i < size; i++)
	{
		for(int j = i; j < size; j++)
		{
			if(i==j) continue;
		    if(arr[i] < arr[j] ) 
			{
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	}
	// print elements of array
	
	printf("\n<------------------------Array------------------------>\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	int end;scanf("%d",&end);
	
}
