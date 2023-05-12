#include "../program/program.h"

int main(){
	
	int choice = 1;
    while(choice == 1){
	
	float base, pw, result;
    printf("\n\nEnter the number: ");
	base = ValidatefloatNumber();
    printf("\n\nEnter a power: ");
	pw = ValidatefloatNumber();

    printf("Answer = %f", pow(base, pw));
	
	printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	return 0;
}

// gcc -o 5.exe 5.c ../program/program.c