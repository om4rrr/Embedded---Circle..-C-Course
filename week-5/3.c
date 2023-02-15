#include <stdio.h>
#define N 3
#define M 3


void multiplication(int *ptr1, int *ptr2, int *ptr3){
	
	for(int i = 0; i < N; i++){
		
		for(int j = 0; j < M; j++){
			
			for(int k = 0; k < M; k++){
			    
				
				//res[i][j] += arr1[i][k] * arr2[k][j];
				
				*((ptr3+i*N)+j) += *((ptr1+i*N)+k) * *((ptr2+k*N)+j);
		}
	}
}
}

void main(void){
	
	int arr1[N][M], arr2[M][N], res[N][N]={0};
	
	// Set elements of 1st matrix
	printf("Enter The elements of 1st matrix\n");
	for(int i = 0; i < N; i++){
		printf("row %d : ",i);
		for(int j = 0; j < M; j++){
			
			scanf("%d",&arr1[i][j]);
		}
	}
	
	// Set elements of 2nd matrix
	printf("Enter The elements of 2nd matrix\n");
	for(int i = 0; i < M; i++){
		printf("row %d : ",i);
		for(int j = 0; j < N; j++){
			
			scanf("%d",&arr2[i][j]);
		}
	}		
	
	multiplication(&arr1[0][0], &arr2[0][0], &res[0][0]);
	
	// get elements of result matrix
	printf("<-------------Result Matrix------------->\n");
	for(int i = 0; i < N; i++){
		
		for(int j = 0; j < N; j++){
			
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
		
}