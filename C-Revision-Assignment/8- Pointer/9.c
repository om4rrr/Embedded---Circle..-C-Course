#include "../program/program.h"

int arr1[2];

void Max_Min_Number(int arr[], int size, int *mx, int *mn){
	
	int max = INT_MIN, min = INT_MAX;
	
	for(int i = 0; i < size; ++i){
		if(arr[i] > max ) max = arr[i];
		if(arr[i] < min ) min = arr[i];
	}
	*mx = max;
    *mn = min;
}


int main(){
	
	int choice = 1;
    while(choice == 1){
	printf("\nEnter Size of array : ");
	int size = ValidateSize();
	
	int arr[size];
	printf("\n\n<--------------Enter elements of array--------------> \n");
	for(int i = 0; i < size; ++i){
		printf("\nEnter %d element : ",i+1);
		arr[i] = ValidateNumber();
	}
	
	int max, min;
	Max_Min_Number(arr, size, &max, &min);
	printf("\nThe Max Number : %d\nThe Min Number : %d", max, min);
	
	printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	return 0;
}

// gcc -o 9.exe 9.c ../program/program.c