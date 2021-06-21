#include<stdio.h>
int  main()
{
int  a[20], b[20], n, smallest=0, largest=0, i, sposition, lposition, temp ;
printf(" Enter the Number of terms: ");
scanf("%i",&n);

printf("%i" , n);

printf("\n Enter the terms : \n") ;
for (  i = 1 ; i <= n ; i++)
{
scanf("%d ", &a[i]) ;
b[i] = a[i] ;
}
smallest = a[1] ;

for (  i = 1 ; i <= n ; i++)
{
if ( a[i] <= smallest )
{
smallest = a[i] ;
sposition = i ;
}

if ( largest <= a[i] )
{
largest = a[i] ;
lposition = i ;
}}
temp = a[sposition] ;
a[sposition] = a[lposition] ;
a[lposition] = temp ;

printf("\n The Array enter by user are :\n") ;
for (  i = 1 ; i <= n ; i++)
printf(" %d \t",b[i]) ;

printf("\n The Array after interchanging the largenst and smallest element :\n") ;
for (  i = 1 ; i <= n ; i++)
printf(" %d \t",a[i]) ;
return ( 0 ) ;
}