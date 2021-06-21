//rate of chargefor 0-151 rs 3 151 to 350 rs 100 + 3.75  351 to to 450 is rs 200 + 4 per unit 451 to 600 rs 300 + 4.25 per unit exceeding 450 above 600 rs 400 +5 per unit 

#include <stdio.h>

int main ()
{
    int units, total;

    printf ('Enter the number of units consumed');
    scanf ("%d" , &units);

    if (units < 151)
    {
        total = units * 3;
        printf("Total Charge = %i",total);
    }

    else if (units <350)
    {
        total = 100 + ((units - 150) * 3.75);
        printf("Total Charge = %i",total);
    }

    else if (units < 450)
    {
        total = 200 + ((units - 350) * 4);
        printf("Total Charge = %i",total);
    }      

    else if (units < 650)
    {
        total = 300 + ((units - 450) * 4.25);
        printf("Total Charge = %i",total);
    }

    else
    {
        total = 500 + ((units - 650) * 5 );
        printf("Total Charge = %i",total);
    
    }
    
    return (0);
}