#include<stdio.h>
int main()
{
    int num;
    printf("enter a num: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("The number is nagitive");
    }
    else if(num>0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}