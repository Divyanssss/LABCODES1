#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int i,n=6,d=1,e,flag=0;
    fgets(a,100,stdin);
   
    for(i=0;a[i]!='\0';i++){
        b[a[i]]++;}
    for(i=0;i<256;i++){
    if(b[i]!=0 && i!=' ')
    printf("frequency of character '%c' is %d\n",i,a[i]);}
}