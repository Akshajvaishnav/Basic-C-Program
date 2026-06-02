#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First Side = ");
    scanf("%d",&a);
    printf("Enter Second Side = ");
    scanf("%d",&b);
    printf("Enter Third Side = ");
    scanf("%d",&c);
    if(a==b&&b==c)
    printf("Triangle is Equilateral");
    else if(a!=b&&b==c||a!=c&&a==b)
    printf("Triangle is Isosceles");
    else
    printf("Triangle is Scalene");
    
    return 0;
}