#include <stdio.h>
int main(){
	int a,b,c;
	printf("first value\n");
	scanf("%d",&a);
	printf("second value\n");
	scanf("%d",&b);
	printf("third value\n");
	scanf("%d",&c);
	if(a==c&&a==b){
		printf("equilateral");
	}
	else if(b==a&&b!=c){
		printf("isoceles");
	}
	else if(c==a&&b!=c){
		printf("isoceles");}
	else{
		printf("scalene");
	}
	
	
}
