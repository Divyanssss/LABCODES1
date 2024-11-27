#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main(){
    char a[100];
    int i,n=6,d=1,e,flag=0;
    fgets(a,100,stdin);
    int len=strlen(a);
    int ll=0;
    for(i=len-1;i>=0;i--){
        if(a[i]==' '){
            break;
        }
        ll++;
    }
    printf("%d",ll);
}