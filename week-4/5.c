#include <stdio.h>

void main(void){
	
	printf("\nEnter Number of Rows : ");
	int row; scanf("%d",&row); 
	printf("\nEnter Number of columns : ");
	int col; scanf("%d",&col);
	int arr[100][100]={0};
	
	for(int i = 0; i < row; i++)
	{
		printf("\nEnter Row %d : ",i+1);
		for(int j = 0; j < col; j++)
	    {
		   scanf("%d",&arr[i][j]); 
	    }
	}
	
	// print Row Totals
	printf("\nRow Totals : ");
	
	int sum_row=0;
		for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
	    {
		   sum_row+=arr[i][j]; 
	    }
		printf("%d ",sum_row);
		sum_row=0;
	}
	
	// print columns Totals
	printf("\ncolumns Totals : ");

    	int sum_col=0;
		for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
	    {
		   sum_col+=arr[j][i]; 
	    }
		printf("%d ",sum_col);
		sum_col=0;
	}
	printf("\n");
}