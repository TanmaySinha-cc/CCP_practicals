#include<stdio.h> 
 int main() 
 { 
   int i=1,n; 
   printf("enter a number: "); 
   scanf("%d",&n); 
   
    while( i < 100 );
    {
        if( i % n == 0 )     
        printf("\n%d ",i) ;
        i=i+1;
    }    
    
  
   return 0; 
 } 
 