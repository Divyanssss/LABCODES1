#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d,e,f;
	c=0;
	d=0;
	printf("enter b\n");
	a=b;
	scanf("%d",&b);
	for(c=0;b%10!=0;)
	{
			c++;
			b=b/10;
		}
	for(e=0;a%10!=0;c=c-1){
		f=pow(10,c-1);
		e=a%10;
		d=d+e*f;
		a=a/10;
		
	}printf("%d",d);
	
	
	
	
	
	}
