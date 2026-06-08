#include<stdio.h>
main()
{
int a,b,temp;
printf("Enter the 2 numbers a and b: ");
scanf("%d%d", &a, &b);
temp=a;
a=b;
b=temp;
printf("a=%d", a);
printf("b=%d", b);
}