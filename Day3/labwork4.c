#include<stdio.h>
int main()
{
    float p,r,n,interest;
    printf("Enter the principle amount :- ");
    scanf("%f",&p);
    printf("Enter the rate of interest :- "),
    scanf("%f",&r);
    printf("Enter the number of months :- ");
    scanf("%f",&n);
    interest = p * r * n /100;

    printf("Simple interest will be %.2f",interest);
}