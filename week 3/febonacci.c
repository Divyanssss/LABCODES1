#include<stdio.h>
int main()
{
	int c=0;
	int a=0,b=1;
	for(;;)
	{
		c=a+b;b=a;c=b;
		printf("%d",c);
		if(c==7)
		break;
		
	}
	
	
}