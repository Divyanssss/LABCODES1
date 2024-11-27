#include<stdio.h>
int main()
{
    int n,i,k,cnt=0;
    printf("enter the elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the x value\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
   {  
    if(cnt==1)
    break;
     if(a[i]>k)
    {
        printf("the celling off %d is %d",k,a[i]);
        cnt++;
    }
}
}