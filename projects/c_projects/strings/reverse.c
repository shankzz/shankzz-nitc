#include<stdio.h>

void rotate_left(int a[],int size)
{
    int temp=a[0];
    int i=0;
    while(i<size-1)
    {
        a[i]=a[i+1];
        i++;
    }
    a[i]=temp;
}

void main()
{
   //program to rotate an array left
   int a[100],size,d;
   scanf("%d",&size);
   for(int i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
   scanf("%d",&d);
   for(int i=0;i<d;i++)
   {
       rotate_left(a,size);
   }
   for(int i=0;i<size;i++)
   {
     printf("%d",a[i]);
   }

}