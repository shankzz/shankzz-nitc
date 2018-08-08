#include<stdio.h>

int max_finder(int a[],int size)
{int i;
  int large=a[0];
  for(i=1;i<size;i++)
  {
    if(a[i]>large)
      large=a[i];
  }
  return i;
}

int sum_finder(int a[],int size)
{
int total=0;
for(int i=0;i<size;i++)
{
total+=a[i];
}
return total;
}

void main()
{
	int len1,len2;
	int n;
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
	   int len,large1,large2,sum1,sum2;
	   scanf("%d",&len);
	   int a[len],b[len];
	   for(int i=0;i<len;i++)
	   {
	   	scanf("%d",&a[i]);
	   } 
	   for(int i=0;i<len;i++)
	   {
	   	scanf("%d",&b[i]);
	   } 
	   large1=max_finder(a,len);
	   a[large1]=0;
	   large2=max_finder(b,len);
	   b[large2]=0;
	   sum1=sum_finder(a,len);
	   sum2=sum_finder(b,len);
	   if(sum1>sum2)
	   printf("Alice\n");
	   else if (sum2>sum1)
	   printf("Bob\n");
	   else
	   printf("Draw\n");
	     
	}

}
