#include<stdio.h>

int main()
{
    int first,second,third,forth;
    printf("Enter the First number :- ");
    scanf("%d",&first);
    printf("Enter the Second number :- ");
    scanf("%d",&second);
    printf("Enter the Third number :- ");
    scanf("%d",&third);
    printf("Enter the Forth number :- ");
    scanf("%d",&forth);

    if(first>=second)
    {
        if(first>=third)
        {
            printf("First number is maximum ");
        }
        else
        {
            if(third>=forth)
            printf("Third number is maximum ");

            else
            printf("Forth number is maximum");
        }
    }
    else
    {
        if(second>=third)
        printf("Second number is maximum");

        else
        {
            if(third>=forth)
            printf("Third number is maximum");

            else
            printf("Forth number is maximum");
        }
    }
}