#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter a\n");
	scanf("%d",&a);
	printf("enter b\n");
	scanf("%d",&b);
	printf("enter c\n");
	scanf("%d",&c);
	
	if(a>b&&a>c)
	{
		printf("the a is greatest\n");
		
	}
	
else if(b>a&&b>c)
{
printf("the b is greatest\n");	
}
else if (c>a&&c>b)
{printf("the c is greatest\n");
}

	
	
}