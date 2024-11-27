#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,i,x;
	a=0;
	b=0;
	c=0;
	printf("enter a\n");
	scanf("%d",&a);
	for(i=0;a!=0;i++)
	{
			b=a%10;
			x=pow(2,i);
			c=c+b*x;
			a=a/10;
		
		}
	printf("%d",c);
	}


