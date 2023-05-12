#include "../program/program.h"

int main(){
	
	int choice = 1;
    while(choice == 1){
	
	int num, sum=0;
    printf("\n\nEnter any number to find sum of its digit: ");
	num = ValidateNumber();
    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }
    if(sum>0)printf("\n\nSum of digits = %d", sum);
	else printf("\n\nSum of digits = %d", sum*-1);
	printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	return 0;
}

// gcc -o 4.exe 4.c ../program/program.c