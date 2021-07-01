#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char pa[100],tempo;
int i=0,ii=0;
printf("enter the string \n");
gets(pa);
ii=strlen(pa)-1;
while(i<ii)
{
 tempo=pa[ii];
 pa[ii]=pa[i];
 pa[i]=tempo;
 i++;
 ii--;
}
printf("the reversed string is\n ");
puts(pa);
getch();
}