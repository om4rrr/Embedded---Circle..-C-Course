#include <stdio.h>

#include "system.h"
#include "struct.h"
#include "App.h"

extern struct employee employees[len_employees];
int main()
{
    for(int i =0; i <len_employees; i++)
    {
       Set_Data(i);
    }
    Print_Data();
    return 0;
}