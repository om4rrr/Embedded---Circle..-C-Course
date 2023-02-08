#include <stdio.h>

void main(void){
	
	int arr[1000]={0};
	int temp=0,size=0;
	do{
		
	 printf("\nEnter Size of Array : ");
	 scanf("%d",&size);
	 
	}while(size < 2 && printf("\nSize must be bigger than 2 ...\n"));
	
	printf("\nEnter elements of Array :");
	for(int i =0; i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	// sort elements of array descending
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
	printf("\nThe Second largest element in an array : %d\n",arr[1]);
	
}
