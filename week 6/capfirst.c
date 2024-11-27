#include<stdio.h>
#include<stdlib.h>
int main()
{
 
   
   char ch[100];
    int i,j,n=100,d=1,s,e,flag=0,m=0,t=0,k;
    fgets(ch,100,stdin);
    
    for(i=0;i<n;i++){
    if(ch[i]>=65 && ch[i]<=90){
    printf("%c",ch[i]);
    break;}}
    return 0;
    }