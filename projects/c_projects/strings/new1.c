#include<stdio.h>
#include<string.h>

 void left_rotatebyone(char str[])
 {
     char temp=str[0];
     int i;
     for( i=0;i<strlen(str)-1;i++)
     {
         str[i]=str[i+1];
     }
     str[i]=temp;
 }

 void right_rotatebyone(char str[])
 {
    int len=strlen(str);
    char temp=str[len-1];
     for(int i=len-1;i<1;i--)
     {
         str[i]=str[i-1];
     }
     str[0]=temp;
 }

void main()
{
        char str[100],str1[100];
        int d;
        scanf("%s",str);
        scanf("%d",&d);
        strcpy(str1,str);
        for(int i=0;i<d;i++)
        {
            left_rotatebyone(str1);
        }
        for(int i=0;i<d;i++)
        {
            right_rotatebyone(str);
        }
        printf("%s %s",str1,str);
}