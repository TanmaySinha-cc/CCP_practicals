#include <stdio.h>
int main() 
{
    int option  = 2;
    switch(option)
    {
        case 1: 
        printf("30 percent discount \n"); 
        case 2: 
        printf("25 percent discount \n");
        case 3: 
        printf("20 percent discount \n"); 
        default: 
        printf('wrong option \n'); 
        
    }
return 0; 
    }