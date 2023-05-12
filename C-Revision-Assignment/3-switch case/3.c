#include "../program/program.h"

int main() {
	
  int choice = 1;
  while(choice == 1){
	  
  char operator;
  printf("\nEnter an operator (+, -, *, /): ");
  operator = ValidateOperator();
  
  double first, second;
  printf("\nEnter first operand : ");
  first = ValidateDoubleNumber();
  printf("\nEnter second operand : ");
  second =  ValidateDoubleNumber();

  switch (operator) {
    case '+':
      printf("\n\n%.3lf + %.3lf = %.3lf", first, second, first + second);
      break;
    case '-':
      printf("\n\n%.3lf - %.3lf = %.3lf", first, second, first - second);
      break;
    case '*':
      printf("\n\n%.3lf * %.3lf = %.3lf", first, second, first * second);
      break;
    case '/':
      printf("\n\n%.3lf / %.3lf = %.3lf", first, second, first / second);
      break;
     }
    printf("\n\n1.Again\t\t\t2.Quit\n\nYour Choice : ");
	choice = ChooseValidate();
	}
	  return 0;
  }