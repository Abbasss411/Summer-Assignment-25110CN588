#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers");
    scanf("%d%d", &a,&b);
    if(a>b)
    printf("the greatest number is%d",a);
    else
    printf("the greatest number is%d", b);
    return 0;
}