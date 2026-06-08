#include<stdio.h>
int main()
{
 int i,first,last,mid,n,search,a[100];
 printf("Enter the number of elements (max=100): ");
 scanf("%d",&n);
 printf("Enter the elements: ");
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  printf("Enter the element to search: ");
  scanf("%d",&search);
  first=0;
  last=n-1;
  mid=(first+last)/2;
  while(first<=last)
  {
  mid=(first+last)/2;
   if(a[mid]<search)
   {
    first=mid+1;
    }
   else if(a[mid]==search)
    {
    printf("Found at location: %d",mid+1);
    break;
    }
    else if(a[mid]>search)
    {
     last=mid-1;
     
     }
     }
     if(first>last)
     {
      printf("Element %d not found.",search);
      }
      return 0;
}