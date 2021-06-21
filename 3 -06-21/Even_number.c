#include<stdio.h>
int main()
{
int m,n;
printf("Enter the value of start and end ");
scanf ("%d%d", &m, &n);
while (m<=n)
{
if (m%2 == 0)
printf("%d ",m) ;
m=m+1;
}
return 0;
}