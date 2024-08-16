#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter the value of base :- ");
    scanf("%f",&b);
    printf("Enter the value of height :- ");
    scanf("%f",&h);
    area = h * b * 1/2;
    printf("Area of triangle  :- %.2f",area);
}