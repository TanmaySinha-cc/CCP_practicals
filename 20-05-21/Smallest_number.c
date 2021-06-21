#include<stdio.h>
int main()
{
 float a, b, c;

  printf("Input 3 numbers\n");
  scanf("%f%f%f", &a, &b, &c);

if(a < b && a < c)
	{
		printf("%.1f is smallest",a);
	}
	else if(b < c)
	{
		printf("%.1f is smallest",b);
	}
	else
	{
		printf("%.1f is smallest",c);
	}	
	return 0;

}