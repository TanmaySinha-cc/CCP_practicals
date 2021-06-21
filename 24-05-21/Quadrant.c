//Write a program to input angle and get quadrant

#include <stdio.h>

int main ()
{
    int a , quadrant;
    printf("Insert an angle : ");
    scanf ("%d" , &a);

    if (a < 90)
    {
        printf ("Your angle is in the first quadrant");
    }

    else if (a < 180)
    {
        printf ("Your angle is in the second quadrant");
    }

    
    else if (a < 270)
    {
        printf ("Your angle is in the third quadrant");
    }

    
    else if (a < 360)
    {
        printf ("Your angle is in the fourth quadrant");
    }

    else 
    {
        printf ("Enter a valid angle");
    }

    return (0);
}