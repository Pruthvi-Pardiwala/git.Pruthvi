#include<stdio.h>

const double pie = 3.14159265359;

int main()
{
    double r,parimeter;
    printf("Enter the radious :- ");
    scanf("%lf",&r);    
    parimeter = 2 * pie * r;
    printf("Parimeter of a circle is %lf",parimeter);
    return 0;           
}