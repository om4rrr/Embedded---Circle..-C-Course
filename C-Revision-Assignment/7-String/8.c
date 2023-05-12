#include "../program/program.h"


char *my_strcpy(char *s1, const char *s2)
{
    while(*s1++ = *s2++);
    return s1;
}


int main(){
	
	int choice = 1;
    while(choice == 1){
		
	char *str1 = (char *)calloc(MAX_LENGTH, sizeof(char));
	
	printf("Enter your text : ");
	char *str2 = SetString();
	
	for(int i = 0; i < Strlen(str2); ++i) str1[i] = str2[i];
	
	printf("\nYour text : %s\n",str1);
	
	printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	return 0;
}

// gcc -o 8.exe 8.c ../program/program.c