#include "../program/program.h"

int Git_Bit(int n, int i)
{
    int mask = (1 << (i));
    return ((n & mask) > 0 ? 1 : 0);
}


int main(){
	
	int choice = 1;
    while(choice == 1){
		
		printf("\n\nEnter any Number : ");
        int number = ValidateNumber();
		printf("\n\nEnter nth bit to check (0-31): ");
		int bit = Validatebit();

        printf("\n\nThe %d bit is set to %d", bit,Git_Bit(number,bit));

	
	
	printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	return 0;
}

// gcc -o 11.exe 11.c ../program/program.c