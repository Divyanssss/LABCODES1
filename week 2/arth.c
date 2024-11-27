#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int a,b,c,i,x;
	a=rand()%10;
	b=rand()%10;
	c=(rand()%4)+1;
	x=(rand()%4)+1;
	
	if(c==1){
		printf("%d + %d =",a+b);
		scanf("%d",&i);
		if(i==(a+b)){
			if(x==1)
				printf("well done");
			if(x==2)
				printf("good job");
			if(x==3)
				printf("excellent");
			if(x==4)
				printf("right");
		}
		if(i!=(a+b)){	
			if(x==1){
				printf("wrong");
			}
			if(x==2){
				printf("try again");}
			if(x==3){
				printf("better luck next time");}
			if(x==4){
				printf("not right");}
		}
	}
		if(c==2){
		printf("%d * %d =",a*b);
		scanf("%d",&i);
		if(i==(a*b)){
			if(x==1)
				printf("well done");
			if(x==2)
				printf("good job");
			if(x==3)
				printf("excellent");
			if(x==4)
				printf("right");
		}
		if(i!=(a*b)){	
			if(x==1){
				printf("wrong");
			}
			if(x==2){
				printf("try again");}
			if(x==3){
				printf("better luck next time");}
			if(x==4){
				printf("not right");}
		}
	}
		if(c==3){
		printf("%d - %d =",a-b);
		scanf("%d",&i);
		if(i==(a-b)){
			if(x==1)
				printf("well done");
			if(x==2)
				printf("good job");
			if(x==3)
				printf("excellent");
			if(x==4)
				printf("right");
		}
		if(i!=(a-b)){	
			if(x==1){
				printf("wrong");
			}
			if(x==2){
				printf("try again");}
			if(x==3){
				printf("better luck next time");}
			if(x==4){
				printf("not right");}
		}
	}
		if(c==4){
		printf("%d / %d =",a/b);
		scanf("%d",&i);
		if(i==(a/b)){
			if(x==1)
				printf("well done");
			if(x==2)
				printf("good job");
			if(x==3)
				printf("excellent");
			if(x==4)
				printf("right");
		}
		if(i!=(a/b)){	
			if(x==1){
				printf("wrong");
			}
			if(x==2){
				printf("try again");}
			if(x==3){
				printf("better luck next time");}
			if(x==4){
				printf("not right");}
		}
	}

		
	}
	
	


