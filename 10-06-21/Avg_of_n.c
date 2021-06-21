#include<stdio.h>

int main()
{
    int n, i;
    float sum = 0, x,avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum = sum + x;
    }
    avg = sum / n;
    printf("\nAverage of the entered numbers is = %.2f", avg);
    return 0;
}