#include<stdio.h>
int main()
{
    int first,second,third;
    printf("Enter number 1 :- ");
    scanf("%d",&first);
    printf("Enter number 2 :- ");
    scanf("%d",&second);
    printf("Enter number 3 :- ");
    scanf("%d",&third);

    if(first<=second)
    {
        if(first<=third)
        {
            printf("First number is minimum");
        }
        else
        {
            printf("Third number is minimum");
        }
    }
    else
    {
        if(second<=third)
        {
            printf("Second number is minimum");
        }
        else
        {
            printf("Third number is minimum");
        }
    }
}