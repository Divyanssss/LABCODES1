
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main()
{
  int n,i,j,m,s,flag=0;
  char c;
  char a[100];
   
    fgets(a,100,stdin);
    
    for(i=0;i<n;i++){
    if(a[i]==c){
    printf("%d\n",i+1);
    flag=1;
    break;
    }}
    if(flag==0)
    printf("charcter is not found\n");
}