#include <stdio.h>
int main(){
	int d,m,y;
	printf("enter in the format date,month,year \n");
	scanf("%d %d %d",&d,&m,&y);
	printf("the date given is %d %d %d \n",d,m,y);
	if(d>31 || m>12 || d<0 || m<0)
		printf("invalid input");
	else if((m==2||m==4||m==6||m==9||m==11)&&d==31){
		printf("invalid output\n");
	}
		else if(m==2&&d==30){
		printf("invalid output \n");}	
	else{
		if(m==2){
			if(d==29){
				if((y%4==0&&y%100!=0)||y%400==0){
					m=3;
					d=1;
				}
				else{
					printf("invalid input\n");
				}
			}
			else if(d==28){
				d=1;
				m=3;
				
			}
			else{
				d++;
			}
			
		}
		if(m==12){
			if(d==31){
				d=1;
				y++;
				m=1;
				
			}
			else{
				d++;
			}
		
		}
		else if((m==1||m==3||m==5||m==7||m==8||m==10)&&d==31){
			m++;
			d=1;}
		else if((m==4||m==6||m==9||m==11)&&d==30){
			m++;
			d=1;}	
		else{
			d++;
		}
			printf("the next date is %d %d %d",d,m,y);
	
	}
	
	return 0;
}
