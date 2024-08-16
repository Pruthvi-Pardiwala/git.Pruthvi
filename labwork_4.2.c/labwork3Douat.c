#include<stdio.h>
int main()
{
    int a,b,formula;

    printf("Enter the value of A :- ");
    scanf("%d",&a);
    printf("Enter the value of B :- ");
    scanf("%d",&b);

    formula = ( a * a * a ) + (3 * ( a * a ) *  b)  + (3 * a  * ( b * b )) + ( b * b * b );

    printf("Answer is %d",&formula); 
}