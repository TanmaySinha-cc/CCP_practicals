
#include <stdio.h>
void main()
{
    char pa[100],ma[100];
    int i, length = 0;
    printf("\nEnter the string :");
    gets(pa);
    i = 0;
    while (pa[i] != '\0')
    {
        ma[i] = pa[i];
        i++;
    }
    for (i = 0; ma[i] != '\0'; i++)
    {
        length++;
    }
    ma[i] = '\0';
    printf("\n Copied String is %s ", ma);
    printf("The length of a string is the number of characters in it \n");
    printf("So, the length of %s = %d\n", ma, length); 
 }