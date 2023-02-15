#include <stdio.h>
#define N 5


void multiplication(int *ptr1, int *ptr2, int *ptr3){
		
		for(int i = 0; i < N; i++){
				
				*(ptr3+i) = *(ptr1+i) * *(ptr2+i); 
			}
}

void main(void){
	
	int arr1[N], arr2[N], res[N];
	
	// Set elements of 1st array
	printf("Enter elements of 1st array : ");
	for(int i = 0; i < N; i++) 
		scanf("%d",&arr1[i]);
	
	// Set elements of 2nd array
	printf("\nEnter elements of 2nd array : ");
	for(int i = 0; i < N; i++)
		scanf("%d",&arr2[i]);
		
	multiplication(arr1, arr2, res);
	
	// get elements of result array
	printf("\n<---------------Result Array--------------->\n");
	for(int i = 0; i < N; i++)
		printf("%d ",res[i]);
    
    printf("\n");	
}