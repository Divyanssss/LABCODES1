#include<stdio.h>
int fun(int a)
{   
    if(a==1)
    return 1;
    if(a==2)
    return 2;
    if(a==3)
    return 3;
    if(a>3);
   return fun(a-1)+fun(a-2)+fun(a-3);
}
int main()
{
    int n;
    printf("enter the nth term:");
    scanf("%d",&n);
    printf("the nth term is:");
    printf("%d",fun(n));
}
