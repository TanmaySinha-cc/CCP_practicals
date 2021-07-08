#include<stdio.h>

int main()
    {
        struct student
    {
        char roll_numb[100];
        char name[100],sec[30],dept[50];
        int result,fee;
    }
    stud1,stud2;
    printf("\nEnter the details of student 1:");
    printf("\nname:");
    scanf("%s",stud1.name);
    
    printf("\nsection:");
    scanf("%s",stud1.sec);
    
    printf("\nroll number:");
    scanf("%s",&stud1.roll_numb);
    
    printf("\ndepartment:");
    scanf("%s",&stud1.dept);
    
    printf("\nfee:");
    scanf("%d",&stud1.fee);
    
    printf("\nresult:");
    scanf("%d",&stud1.result);
    
    printf("\nEnter the details of student 2:");
    printf("\nname:");
    scanf("%s",stud2.name);
    
    printf("\nsection:");
    scanf("%s",stud2.sec);
    
    printf("\nroll number:");
    scanf("%s",&stud2.roll_numb);
    
    printf("\ndepartment:");
    scanf("%s",&stud2.dept);
    
    printf("\nfee:");
    scanf("%d",&stud2.fee);
    
    printf("\nresult:");
    scanf("%d",&stud2.result);
if(stud1.result>=stud2.result)
{
    printf("student 1 got the hightest marks \n the details of the student is as follows: \nname:%s\nsection:%s\nroll number:%s\ndepartment:%s\nfee:%d\nresult:%d",stud1.name,stud1.sec,stud1.roll_numb,stud1.dept,stud1.fee,stud1.result);
}

if(stud2.result>=stud1.result)
{
printf("student 2 got the hightest marks \n the details of the student is as follows: \nname:%s\nsection:%s\nroll number:%s\ndepartment:%s\nfee:%d\nresult:%d",stud2.name,stud2.sec,stud2.roll_numb,stud2.dept,stud2.fee,stud2.result);
}
getch();
return 0;
}
