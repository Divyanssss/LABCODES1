#include<stdio.h>
int main()
{
		int n=5;
        int s,j,i;
	
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		
			printf(" ");
		
		for(j=0;j<2*n-2*i-1;j++)
		{printf("*");}
		printf("\n");
	}
	return 0;
}
