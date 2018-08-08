#include<stdio.h>
#include<string.h>

void reverse(char str[],int beg,int end){
    while(beg<end)
    {
       char temp=str[end];
       str[end]=str[beg];
       str[beg]=temp;
       beg++;
       end--;
    }
}

void main()
{
 char str[100];
 int len,d;
 scanf("%s",str);
 scanf("%d",&d);
 len=strlen(str);
 reverse(str,0,len-d-1);
 reverse(str,len-d,strlen(str)-1);
 reverse(str,0,len-1);
 printf("%s",str);
}