#include<stdio.h>
#include<math.h>

int main(){

float p;
float rate;
float time;
float tm,si;
float a;
printf("principal");
scanf("%f",&p);
printf("rate");
scanf("%f",&rate);
printf("time period:");
scanf("d",&time);
si=p*rate*time/100;
printf("the value of simple intrest is %d",si);
tm=p*(pow(((rate/100)+1),time))-p;
printf("the your compund intrest is %f ",tm);
return 0;
}