#include<stdio.h>
main()
{
 int a[10],i,j,n,t;
 
 printf("Enter how many the Numbers to sort (max=10): ");
 scanf("%d", &n);
 
 printf("Enter %d Enements: ",n);
 for(i=0;i<n;i++)
  {
   scanf("%d", &a[i]);
  }
  for(i=0;i<n-1;i++)
  {
  
   for(j=i+1;j<n;j++)
   {
    if(a[i]>a[j])
    {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
   }
  }
  printf("The Sorted elements are: ");
  for(i=0;i<n;i++)
   {
    printf("%d ", a[i]);
   }
}