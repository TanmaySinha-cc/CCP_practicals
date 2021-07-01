#include<stdio.h>
#include<conio.h>
void main()
{
 char pa[100],ma[100],ya[100];
 int i=0,j=0,length;
 printf("\n Enter the first word \n");
 gets(pa);
 printf("\n Enter the second word \n");
 gets(ma);
 while(pa[i] !='\0')
 {
 ya[j]=pa[i];
 i++;
 j++;
 }
 i=0;
 while(ma[i]!='\0')
 {
 ya[j]=ma[i];
 i++;
 j++;
 }
 for (i = 0; ya[i] != '\0'; i++)
 {
 length++;
 }
 ya[j]= '\0';
 printf("combination of the two words is \n");
 puts(ya);
 printf("So, the length of %s = %d\n", ya, length);
 getch();
}
