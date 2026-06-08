#include<stdio.h>
main(){
char Alpha;
printf("Enter the alphabet");
scanf("%c",&Alpha);
if(Alpha=='a' || Alpha=='e' || Alpha=='i' || Alpha=='o' || Alpha=='u')
{
printf("The alphabet is a vowel");
}
else
{
printf("the alphabet is consonent");
}
}