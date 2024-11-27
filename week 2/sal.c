#include<stdio.h>
int main()
{
	int basic,da,hra;
	printf("enter basic salary\n");
	scanf("%d",&basic);
	
	da=basic*50/100;
	hra=basic*10/100;
printf("%d",basic+da+hra);
}