#ifndef STRUCT2_H
#define STRUCT2_H

#include "System.h"
struct admin{
    
    int ID;
    char password[pass_len];
    char name[name_len];
};

struct admin Admins[NumOfAdmins]={{5250,"*#100#*","Raghad"},{1010,"##300##","Omar"}};

#endif