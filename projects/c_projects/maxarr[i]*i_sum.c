#include<stdio.h>

int greatest(int arr[],int beg,int end)
{
int max=arr[beg];
int max_ind=beg;
for(int i=beg+1;i<end;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
        max_ind=i;
    }
}
return max_ind;
}
void main()
{
   int arr[100],i,j,size,sum=0;
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0,j=size-1;i<size;i++,j--)
  {
      int index=greatest(arr,0,j);
      int temp=arr[j];
      arr[j]=arr[index];
      arr[index]=temp;
  }
  for(i=0;i<size;i++)
  {
      sum+=(i*arr[i]);
  }
  printf("%d",sum);
}