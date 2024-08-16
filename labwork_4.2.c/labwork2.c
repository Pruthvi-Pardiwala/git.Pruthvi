#include<stdio.h>
int main()
{
    int formula,a,b;

    printf("Enter the value of A :- ");
    scanf("%d",&a);

    printf("Enter the value of B :- ");
    scanf("%d",&b);

    formula = ( a * a ) - ( 2 * a * b ) + ( b * b );

    printf(" Answer is %d",formula);

    return 0;
}