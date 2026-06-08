#include<stdio.h>
main()
{ 
  int a[10],n,i,loc=0,item;
  
  printf("How many elements in list?: ");
  scanf("%d", &n);
  printf("Enter the %d elements: ",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
   printf("Enter elemtent to be searched: ");
   scanf("%d",&item);
   
   for(i=0;i<n;i++)
   {
    if(a[i]==item)
    {
     loc=i+1;
     break;
    }
   }
     if(loc>0)
     { 
      printf("Search successful, item found at %d postion",loc);
     }
      else
      {
       printf("Search unsucessfull");
      }
}