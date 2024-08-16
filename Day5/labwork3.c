#include<stdio.h>
void main()
{
    int Eng,Math,Sci,sum;
    float avg;
    printf("enter a marks of English :- ");
    scanf("%d",&Eng);
    printf("enter a marks of Maths :- ");
    scanf("%d",&Math);
    printf("enter a marks of Science :- ");
    scanf("%d",&Sci);
    sum = Eng+Math+Sci;
    avg = sum/3;
    printf("Average = %.2f",avg);
}