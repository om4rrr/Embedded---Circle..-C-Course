#include "../program/program.h"

#define gitbit(num,i) num>>i & 1

int main(){
	
	int choice = 1;
	while(choice == 1){
	printf("\nEnter any number : ");
	int number = ValidateNumber();
	
	int zeros = 0, ones = 0;
	
	for(int i = 0; i < 32; ++i){
		if( gitbit(number,i)) ones++; 
		else zeros++;
	}
	printf("\nTotal Zero bit is : %d",zeros);
	printf("\n\nTotal one bit is : %d",ones);
	printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	return 0;
}