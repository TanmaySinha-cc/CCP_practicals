#include<stdio.h>
#include<math.h>

int main() {
    double a , b , c , discriminant , root1 , root2 , real_half , imaginary_half;
    printf ("insert coefficients of quadratic equation \n");
    scanf ("%lf%lf%lf" , &a , &b , &c);

    discriminant = ( (b * b) - (4 * a * c));

    printf("Discriminant of the equation is %lf\n", discriminant);

    if (discriminant > 0)
    {
        root1 = ((-b + sqrt(discriminant)) / (2 * a));
        root2 = ((-b - sqrt(discriminant)) / (2 * a));
        printf("root 1 = %lf and root2 = %lf", root1, root2);
    }
    
    else if (discriminant < 0)
    {
        real_half = -b / (2 * a);
        imaginary_half = (sqrt(-discriminant) / (2 * a));
        printf("root1 = %lf + %lfi and root2 = %f-%fi", real_half, imaginary_half, real_half , imaginary_half);

    }
    
    else {
        root1 = -b / (2 * a);
        printf("root1 = root2 = %lf;", root1);
    }
    

return(0);

}