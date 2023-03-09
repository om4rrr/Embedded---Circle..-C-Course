#include <stdio.h>
#include <string.h>
#include "struct2.h"
#include "System.h"
#include "Admin.h"
#include "struct1.h"


extern struct student Grades[NumOfStudents];



// check ID for Admin


int check_id_admin(void)
{
    int id;
    printf("\nPlease enter your id : ");
    scanf("%d",&id);
    
    for(int i = 0; i < NumOfAdmins; i++)
    {
       if(id == Admins[i].ID)  return i;
    }
  
        printf("\nWrong ID, Try again...");
        return check_id_admin();
}


// check password for Admin

int check_pass_admin(void)
{
    char password[pass_len];
    printf("\nPlease enter your password : ");
    scanf("%s",password);
        
        
        for(int i = 0; i < NumOfAdmins; i++)
        {
    
           if(!strcmp(password,Admins[i].password)) return i;
        }
           
        printf("\nWrong Password, Try again...");
        return check_pass_admin();
}

// Enter Admin Interface

int admin_Validation(void)
{
    int i = check_id_admin();
    check_pass_admin();
    printf("\nHello %s",Admins[i].name);
}



// Admin's Authorizations


int cnt = 10; struct student s1;



// Adding New Student to the system.


void insert(void)
{
	if(cnt == NumOfStudents) {printf("Database id full, can't take more students."); return;}
    
    printf("\nEnter the ID : ");
    scanf("%d",&s1.ID);
    printf("\nEnter the Name : ");
    scanf("%s",s1.name);
    printf("\nEnter the Prog. Grade : ");
    scanf("%s",s1.prog);
    printf("\nEnter the Data. Grade : ");
    scanf("%s",s1.data);
    printf("\nEnter the math Grade : ");
    scanf("%s",s1.math);
    printf("\nEnter the Algorithms Grade : ");
    scanf("%s",s1.algor);
    Grades[cnt].ID=s1.ID;
    my_strcpy(Grades[cnt].algor,s1.algor);my_strcpy(Grades[cnt].prog,s1.prog);my_strcpy(Grades[cnt].math,s1.math); my_strcpy(Grades[cnt].data,s1.data);
    for(int i = 0; i < my_strlen(s1.name); i++) Grades[cnt].name[i]=s1.name[i];
    cnt++;
}


// Search for existing Student in the system.

void search(void)
{
    printf("\nEnter the ID : ");
    scanf("%d",&s1.ID);
    
    int f = 1;
    for(int i = 0; i < NumOfStudents; i++)
    {
        if(Grades[i].ID==s1.ID) 
        {
            printf("\nStudent name : %s",Grades[i].name); 
            printf("\n<--------------Your Grades-------------->\n");
            printf("Programming    -->  %s\n"
                   "Data Structure -->  %s\n"
                   "Discrete Math  -->  %s\n"
                   "Algorithms     -->  %s\n",Grades[i].prog,Grades[i].data,Grades[i].math,Grades[i].algor);
            f = 0;
            break;
        }
    }
    if(f) printf("\nNot found");
}


// Modify Student's Grade.

void update(void)
{
    int change;
    printf("\nEnter the ID : ");
    scanf("%d",&s1.ID);
    int f = 1,i;
    for(i = 0; i < NumOfStudents; i++)
    {
        if(Grades[i].ID==s1.ID) {f = 0; break;}
    }
    if(!f) 
    {
        printf("\nYou 'll use these codes m(math),p(Programming), d(Data Structure), a(Algorithms),q(quit) ");
         while(1){
        char ch,change[N];
        printf("\nEnter Subject code : ");
        fflush(stdin);fflush(stdout);
        scanf("%c",&ch);
		fflush(stdin);fflush(stdout);
		if (ch == 'q') break;
        printf("\nEnter New Grade : ");
        scanf("%s",change);
		while(getchar() != '\n');
        switch(ch){
        case 'm' : my_strcpy(Grades[i].math,change); break;
        case 'p' : my_strcpy(Grades[i].prog,change); break;
        case 'd' : my_strcpy(Grades[i].data,change); break;
        case 'a' : my_strcpy(Grades[i].algor,change);  break;
        default  : printf("\nIllegal code");
        }
		printf("\n");
    }
    }
    else printf("\nNot found");
}

// Print All Students' data.

void print(void)
{
    printf("\nStudent ID     Student Name     Programming     Data Structure     Discrete Math     Algorithms");
    
    for(int i = 0; i < cnt; i++)
    printf("\n    %d           %-17s %-17s %-17s %-17s %-16s",Grades[i].ID,Grades[i].name,Grades[i].prog,Grades[i].data,Grades[i].math,Grades[i].algor);

}