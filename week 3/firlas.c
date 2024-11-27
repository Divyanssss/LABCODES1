#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,i,x;
	a=0;
	b=0;
	c=0;
	printf("enter a\n");
	scanf("%d",&a);
	printf("last digit is %d",a%10);
	for(i=0;a!=0;i++)
	{
		b=a%10;
			a=a/10;
		
		}
	printf("first dgit is %d",b);
	}


