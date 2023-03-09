
#include <stdio.h>
#include "System.h"
#include "User.h"
#include "struct1.h"

struct student Grades[NumOfStudents]={
    {1112,"A+","A","B","B+","hamed"   },{3148,"C","B","B+","B","Ali"   },
    {5555,"A+","A+","A+","A+","Mohsen"},{2641,"A","B+","A","B+","hagar"},
    {6666,"A+","A+","A","A+","Aya"    },{1212,"A+","A","B","B+","Ahmed"},
    {2651,"A","B+","A","B+","maged"   },{3188,"C","B","B+","B","salma" },
    {7666,"A+","A+","A","A+","kareem" },{2611,"A","B+","A","B+","mona"}};

	
	
void Get_Grades(int id)
{
    for(int i = 0; i < NumOfStudents; i++)
    {
        if(id == Grades[i].ID) {
            printf("Hello %s\n",Grades[i].name);
            printf("\n<--------------Your Grades-------------->\n");
            printf("Programming    -->  %s\n"
                   "Data Structure -->  %s\n"
                   "Discrete Math  -->  %s\n"
                   "Algorithms     -->  %s\n",Grades[i].prog,Grades[i].data,Grades[i].math,Grades[i].algor);
        }
    }
}