#include<stdio.h>

void main()
{
    int arr[50],size,arr1[1000]={-1};
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }    
    
    for(int i=0;i<size;i++)
    {
        arr1[arr[i]]=arr[i];
    }
    for(int i=0;i<1000;i++)
    {
        printf("%d ",arr1[i]);
    }
}