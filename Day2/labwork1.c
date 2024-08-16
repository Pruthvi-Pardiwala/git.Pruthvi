#include<stdio.h>
int main()
{
    int a,b,sum,sub,multi,divi,modu;
    a = 12;
    b = 6;
    sum = a+b;
    sub = a-b;
    multi = a*b;
    divi = a/b;
    modu = a%b;
    printf("Sum of 12 + 6 = %d",sum);
    printf("\nSub of 12 - 6 = %d",sub);
    printf("\nMulti of 12 * 6 = %d",multi);
    printf("\nDivision of 12 / 6 = %d",divi);
    printf("\nModulo of 12 / 6 = %d",modu);
    return 0;
}
