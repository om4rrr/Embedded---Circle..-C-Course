#include <stdio.h>
#include "App.h"
#include "struct.h"
#include "system.h"
 
 
 
 struct employee employees[len_employees]={{"Mohsen"},{"Maged"},{"Mariam"}};

void Set_Data(int recent) 
{
    printf("\nEnter information for %s.",employees[recent].name);
    printf("\nSalary     : "); scanf("%lf",&employees[recent].salary);
    printf("\nBouns rate : "); scanf("%lf",&employees[recent].Bouns_Rate);
    printf("\nDeducation rate : "); scanf("%lf",&employees[recent].Ded_Rate);
}

void Print_Data(void) 
{
    printf("\nEmployee      Salary         Bouns       Deducation    Total Salary");
    for(int i =0; i <len_employees; i++)
    {
        double bouns = employees[i].Bouns_Rate * (employees[i].salary/100);
        double deduc = employees[i].Ded_Rate * (employees[i].salary/100);
        printf("\n %6s %12.2lf$ %12.2lf$ %11.2lf$  %13.2lf$",employees[i].name,employees[i].salary,bouns,deduc,employees[i].salary+bouns-deduc); 
    }
    
}