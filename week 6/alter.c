#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main(){
    char a[100];
    int i,n=6,d=1,e,flag=0;
    fgets(a,100,stdin);
    for(i=1;a[i]='\0';i++){
        if(a[i]!=a[i-1]){
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("yes");
    else
    printf("no");
}