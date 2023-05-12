#include "program.h"

// Take string from user

char* SetString(){
    char *str = (char *)calloc(1,sizeof(char));
    int len = 1;
    *str = '\0';
    char ch;
    ch = getchar();
    int cnt = 1;
    while(ch != '\n'){
        if(cnt == len)
        {
            str = (char *)realloc(str, (2 * len) * sizeof(char));
            len = 2 * len;
        }
        *(str + cnt - 1) = ch;
        *(str + cnt) = '\0';
        cnt++;
        ch = getchar();
    }
    fflush(stdin);
    if(len == 1 ) return SetString();
    return str;
}


// convert String to int


int StringToInt(char* StringNum){
    long long num = 0; bool f = false;
    for(int i = 0; i < strlen(StringNum); i++)
    {
		if(i == 0 && StringNum[0] == '-'){
			f = true;
			continue;
		}
        if(!isdigit(StringNum[i])) return -1;
        num *= 10;
        num += StringNum[i] - '0';
    }
	if(num > INT_MAX) return -1;
	if(f) num *= -1;
    return (int)num;
}


// Calculate String length

size_t Strlen(const char *s){
    const char *p = s;
    while(*s)
        s++;
    return s-p;
}

// validate taken number

int ValidateNumber(){
    int num;
    char *temp;
    do{
		temp = SetString();
		if(!strcmp(temp,"-1")) return -1;
		num = StringToInt(temp);
    } while ( num == -1 && printf("\nInvalid Number, Try again..\n\nEnter Number : "));
    return num;
}

// validate taken year


long long StringToInt__(char* StringNum){
    long long num = 0;
    for(int i = 0; i < strlen(StringNum); i++)
    {
        if(!isdigit(StringNum[i])) return -1;
        num *= 10;
        num += StringNum[i] - '0';
    }
    return num;
}

long long Validateyear(){
    long long num;
    char *temp;
    do{
		temp = SetString();
		num = StringToInt__(temp);
    } while ( num == -1 && printf("\nInvalid year, Try again..\n\nEnter year : "));
    return num;
}

int ValidateSize(){
    int num;
    char *temp;
    do{
		temp = SetString();
		num = StringToInt__(temp);
    } while ( num == -1 && printf("\nInvalid number, Try again..\n\nEnter number : "));
    return num;
}

int ChooseValidate(){
    int choice;
    char *temp;
    do{
        temp = SetString();
        choice = StringToInt(temp);
    } while((choice!=1 && choice!=2) && printf("\nInvalid Choice! please try again..\n\nYour Choice : "));
    return choice;
}


// validate operator

char ValidateOperator(){
	char* temp;
	
	do{
		temp = SetString(); // + - * /
	}while(( strcmp(temp, "+") && strcmp(temp, "-") && strcmp(temp, "*") && strcmp(temp, "/") ) &&
	printf("\n\nError! operator is not correct, try again...\n\nEnter an operator (+, -, *, /): "));	
	return temp[0];
}


// convert String to double


double StringToDouble(char* StringNum){
    double num = 0; 
	int cnt = 0, c = 1; 
	bool f = false; // 12.876
	
	
    for(int i = 0; i < strlen(StringNum); i++)
    {
		if(i == 0 && StringNum[0] == '-'){ f = true; continue; }
		
		if( StringNum[i] == '.') {cnt++; continue; }
		
        if(!isdigit(StringNum[i])) return -1;
		
		if(cnt == 0){
        num *= 10;
        num += StringNum[i] - '0';
		}
		else if (cnt == 1){
			num += (StringNum[i] - '0') / pow(10,c);
			c++;
		}
		else return -1;
    }
	if(f) num *= -1;
    return num;
}


    double ValidateDoubleNumber(){
    double num;
    char *temp;
    do{
		temp = SetString();
		num = StringToDouble(temp);
    } while ( num == -1 && printf("\nInvalid Operand, Try again..\n\nEnter Operand : "));
    return num;
}




// convert String to float


double StringToFloat(char* StringNum){
    float num = 0; 
	int cnt = 0, c = 1; 
	bool f = false; // 12.876
	
	
    for(int i = 0; i < strlen(StringNum); i++)
    {
		if(i == 0 && StringNum[0] == '-'){ f = true; continue; }
		
		if( StringNum[i] == '.') {cnt++; continue; }
		
        if(!isdigit(StringNum[i])) return -1;
		
		if(cnt == 0){
        num *= 10;
        num += StringNum[i] - '0';
		}
		else if (cnt == 1){
			num += (StringNum[i] - '0') / pow(10,c);
			c++;
		}
		else return -1;
    }
	if(f) num *= -1;
    return num;
}


float ValidatefloatNumber(){
    float num;
    char *temp;
    do{
		temp = SetString();
		num = StringToDouble(temp);
    } while ( num == -1 && printf("\nInvalid Number, Try again..\n\nEnter Number : "));
    return num;
}


// validate taken bit

int Validatebit(){
    int num;
    char *temp;
    do{
		temp = SetString();
		num = StringToInt(temp);
    } while ( ((Strlen(temp) > 2) || (num < 0 || num > 31)) && printf("\nInvalid Number, Try again..\n\nEnter Number : "));
    return num;
}

// validate binary number


char* BinaryValidation(){
    bool f;
    char* str = NULL;
    do
    {
        str=SetString();
        f= false;
        for(int i = 0; i<  Strlen(str);++i){
            if(str[i] != '0' && str[i] != '1' ) f = true;
        }
    }
    while ( f && printf("\nInvalid Number, Try again..\n\nEnter binary number : "));
    return str;
}
