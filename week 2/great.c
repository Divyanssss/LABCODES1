#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter value of first ball\n");
	scanf("%d",&a);
	printf("enter value of second ball\n");
	scanf("%d",&b);
	printf("enter value is third ball\n");
	scanf("%d",&c);
	if(a>b&&a>c){
		printf("the greatest is %d",a);
	}
	if(b>a&&b>c){
		printf("the greatest is %d",b);
	}
	if(c>b&&c>a){
		printf("the greatest is %d",c);
	}
	
	
}
