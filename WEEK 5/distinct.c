#include<stdio.h>
int main()
{
    int i,j,n,d=0,e,flag=0;
	n=5;
	int a[5]={1,9,4,9,10};
	int b[5]={};
	
   
     for(i=0;i<n;i++)
     {
        b[a[i]-0]++;
     }
     for(i=0;i<n;i++)
     {   
        if(b[i]!=0)
        flag++;
     }
     printf("%d",flag);
     return 0;
}