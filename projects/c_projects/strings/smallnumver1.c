#include<stdio.h>
#include<string.h>

void main()
{
   int n,temp;
   scanf("%d",&n);
   int st[50];
   int i=0;
   int num=n;
   while(num!=0)
   {
     temp=num-9;
     num=num-9;
     st[i]=temp; 
     i++;
   }
   for(int j=i-1;j>=0;j--) 
   {
       printf("%d",st[j]);
   }
   for(int k=0;k<n;k++)
   {
       printf("0");
   }
}