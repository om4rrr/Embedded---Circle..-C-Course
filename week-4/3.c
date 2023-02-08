#include <stdio.h>
#include <stdbool.h>

void main(void)
{
	printf("\nEnter Size of Array : ");
	int size; scanf("%d",&size);
	int arr[1000]={0};
	printf("\nEnter The Elements of Array : ");
	for(int i = 0; i < size; i++)
		scanf("%d",&arr[i]);// 1 5 8 5 7 3 2 4 1 6 2
	bool flag = true;
	// print Array
	printf("\nUnique Elements in the given array are:\n");
	printf("\n%d ",arr[0]);
	for(int i =1; i < size; i++)
	{
		for(int j = 0; j < i; j++)
		{

			if(arr[i] == arr[j]) {flag = false; break;}
		}
		if(flag) printf("%d ",arr[i]);
		else flag = true;
	}
	printf("\n");

}