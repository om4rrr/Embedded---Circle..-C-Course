#include "../program/program.h"


int countOdd(int arr[], int size){
	int cnt = 0;
	for(int i = 0; i < size; ++i){
		if(arr[i] & 1) cnt++;
	}
	return cnt;	
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
	
	printf("\nTotal Even Elements : %d", size - countOdd(arr, size));
	printf("\nTotal Odd Elements : %d",countOdd(arr, size));
	
	printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	return 0;
}

// gcc -o 7.exe 7.c ../program/program.c