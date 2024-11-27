#include<stdio.h>
#include<string.h>
#include<stdlib.h>

union perc
{
  char name[50];
  int rollno;
  int mark[5];
}s;

int main()
{ int i,sum=0;

  scanf("%s",&s.name);

  scanf("%d",&s.rollno);

  for(i=0;i<6;i++)
  {
    scanf("%d",&s.mark[i]);
    sum=sum+s.mark[i];
  }

  printf("your percentage is %d",sum/5);

}