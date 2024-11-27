#include <stdio.h>
int main(){
	int a,b,c;
	c=0;
	printf("enter a\n");
	scanf("%d",&b);
	for(c=0;b%10!=0;)
	{
			c++;
			b=b/10;
		}
	printf("%d",c);	}


