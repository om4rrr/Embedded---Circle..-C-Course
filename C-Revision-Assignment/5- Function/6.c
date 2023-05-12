#include "../program/program.h"

int max_number(int first, int second, int thrid, int fourth){
	
	int max;
	
	if(first > second){
		
		if(first > thrid){
			if(first > fourth) max = first;
			else max = fourth;
		}
		else{
			if(thrid > fourth) max = thrid;
			else max = fourth;
		}
	}
	else{
		if(second > thrid){
			if(second > fourth) max = second;
			else max = fourth;
		}
		else{
			if(thrid > fourth) max = thrid;
			else max = fourth;
		}
	}
			
	return max;		
}


int min_number(int first, int second, int thrid, int fourth){
	
	int min;
	
	if(first < second){
		
		if(first < thrid){
			if(first < fourth) min = first;
			else min = fourth;
		}
		else{
			if(thrid < fourth) min = thrid;
			else min = fourth;
		}
	}
	else{
		if(second < thrid){
			if(second < fourth) min = second;
			else min = fourth;
		}
		else{
			if(thrid < fourth) min = thrid;
			else min = fourth;
		}
	}
			
	return min;	
}

int main(){
	
	int choice = 1;
    while(choice == 1){
	
	printf("\nEnter the First number : ");
	int first = ValidateNumber();
	printf("\nEnter the Second number : ");
	int second = ValidateNumber();
	printf("\nEnter the Thrid number : ");
	int thrid = ValidateNumber();
	printf("\nEnter the Fourth number : ");
	int fourth = ValidateNumber();
	
	printf("\nThe Max Number : %d",max_number(first, second, thrid, fourth));
	printf("\nThe Min Number : %d",min_number(first, second, thrid, fourth));
	
	printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	return 0;
}

// gcc -o 6.exe 6.c ../program/program.c