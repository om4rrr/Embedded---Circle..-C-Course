#include "../program/program.h"

int BinaryToDecimal(char* num)
{
    int dec = 0, cnt = 0;
      for(int i = Strlen(num) - 1; i >= 0 ;--i){
        dec += (num[i]-'0') * (1<<cnt);  
        cnt++;
    }
    return dec;
}

int main(){
	
	int choice = 1;
    while(choice == 1){
	
	printf("\n\nEnter a binary number : ");
	char* num = BinaryValidation();
	
    printf("%s in binary = %d in decimal", num, BinaryToDecimal(num));
	
	printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	return 0;
}

// gcc -o 10.exe 10.c ../program/program.c