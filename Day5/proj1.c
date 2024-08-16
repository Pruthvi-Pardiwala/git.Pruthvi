#include<stdio.h>
void main()
{
    int num;
    printf("enter a num: ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}