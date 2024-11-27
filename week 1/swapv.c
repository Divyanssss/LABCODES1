#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d",&a);
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("the value of a is %d,the value of b is %d\n",a,b);	
	
}