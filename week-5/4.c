#include <stdio.h>

void Set_Array(int *ptr, int n){
    
    printf("\nEnter The elements of array : ");
    for(int i = 0; i < n; i++){
			
			scanf("%d",(ptr+i));
		}
    
}

void Bubble_Sort(int *ptr, int n){
    
    int temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++){
            
            if(*(ptr+i) > *(ptr+j) )
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    
    
}

void main(void){
	
	int size, arr[1000]={0};
    printf("Enter The size of array : ");
    scanf("%d",&size);
    
    Set_Array(&arr[0], size);
    Bubble_Sort(&arr[0], size);
    
	printf("\n<-------------New Matrix------------->\n");
	for(int i = 0; i < size; i++)
		printf("%d ",arr[i]);
		
}