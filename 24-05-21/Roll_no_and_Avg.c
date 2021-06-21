//Write a program to read rollno and marks obtained by a student in 4 subjects of 100 marks each and display the  rollno with percentage score secured. Use user defined function to find the sum and percentage

#include <stdio.h>

int sum(int marks_1, int marks_2, int marks_3, int marks_4)
{
    int total;
    total = marks_1 + marks_2 + marks_3 + marks_4;
}

int percentage(int sum)

{
    float per;
    per = (sum / 400) * 100;
}

int main()
{
    int marks_1, marks_2, marks_3 ,marks_4 , roll_no;

    printf("Roll number of the student : ");
    scanf ("%d" , &roll_no);

    printf("Insert marks in first subject : ");
    scanf ("%d" , &marks_1);

    printf("Insert marks in second subject : ");
    scanf ("%d" , &marks_2);
    
    printf("Insert marks in third subject : ");
    scanf ("%d" , &marks_3);
    
    printf("Insert marks in fourth subject : \n\n\n\n\n");
    scanf ("%d" , &marks_4);
    
    int s = sum(marks_1, marks_2, marks_3, marks_4);
    float p = percentage(s);

    printf("Roll number : %d\nTotal marks obtained : %d\nPercentage obtained : %f", roll_no , s , p);

    return (0);
}