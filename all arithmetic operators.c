#include<stdio.h>
main()
{
int X,Y,sum,product,division,sub;
printf("Enter the value of X" ,X);
scanf("%d", &X);
printf("Enter the value of Y" ,Y);
scanf("%d", &Y);
sum=X+Y;
sub=X-Y;
product=X*Y;
division=X/Y;
printf("sum=%d", sum);
printf("sub=%d", sub);
printf("product=%d", product);
printf("division=%d", division);
return 0;
}