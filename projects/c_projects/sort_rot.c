#include<stdio.h>

int find_pivot(int a[],int beg,int end)
{
    int mid=(beg+end)/2;
    if(a[mid]>a[mid+1] && a[mid]>a[mid-1])
    return mid;
    else if(a[mid]>a[mid-1] && a[mid]<a[mid+1])
    return find_pivot(a,mid+1,end);
    else if(a[mid]<a[mid+1] && a[mid]<a[mid-1])
    return find_pivot(a,beg,mid-1);
}
int binary_search(int a[],int beg,int end,int key)
{
    int large=find_pivot(a,beg,end);
    if(a[large]==key)
    return large;
    else{
        return binary_search(a,beg,large-1,key);
        return binary_search(a,large+1,end,key);
    }
    
}

void main()
{
   int size,arr[100],key,i,loc;
   scanf("%d",&size);
   for(i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   } 
   scanf("%d",&key);
   loc= binary_search(arr,0,size-1,key);
   printf("%d",loc);

}