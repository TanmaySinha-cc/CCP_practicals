#include <stdio.h>

int minutes(int hour , int min)
{
    int total_min = (hour * 60) + min;
    return total_min;
}

int main()
{
    int min , total_min , hour;

    printf("Insert the time (HH:MM) : ");
    scanf ("%d%d",&hour , &min);

    total_min = minutes(hour , min);

    printf ("The total time in mnnutes is %d" , total_min);

}