#include "../program/program.h"

#define gitbit(num,i) num>>i & 1

int main(){
	
	int choice = 1;
	while(choice == 1){
	printf("\nEnter Year : ");
	long long year = Validateyear();
	
	if( (!(year % 4) && year % 100) || !(year % 400) ) printf("\n\nLEAP YEAR\n");
    else printf("\nNOT LEAP YEAR\n");
	
	printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	

	return 0;
}