#include <stdio.h>
int main(){
	int a,b,c;
	a=0;
	b=0;
	printf("enter a\n");
	scanf("%d",&a);
	for(b=0;a%10!=0;)
	{
			b=a%10;
			c=c+b;
			a=a/10;
		
		}
	printf("%d",c);
	}


