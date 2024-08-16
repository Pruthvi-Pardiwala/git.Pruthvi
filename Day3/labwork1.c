#include<stdio.h>
const int Pi = 3.14159265359;
int main()
{
    float r,area;
    printf("Enter the radious of circle");
    scanf("%f",&r);
    area = Pi * r * r;
    printf("Area of circle is %.2f",area);

}