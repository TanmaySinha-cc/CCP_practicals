//Write a program that accepts the current date and date of birth of the user then calculate age of user and display on the screen. Date format : dd/mm/yyyy

#include <stdio.h>

int main(){

   int present_date, present_month, present_year, birth_date,  birth_month,  birth_year;
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   
   if (birth_date > present_date) {
      present_date = present_date + month[birth_month - 1];
      present_month = present_month - 1;
   }
   if (birth_month > present_month) {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }

   int present_date = 24;
   int present_month = 5;
   int present_year = 2021;

   int final_date = present_date - birth_date;
   int final_month = present_month - birth_month;
   int final_year = present_year - birth_year;
   printf("Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
}
int main() {
   
}