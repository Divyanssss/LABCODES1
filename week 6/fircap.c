#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main(){
    char a[100];
    int i,n=6,d=1,e,flag=0;
    fgets(a,100,stdin);
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='A'&&a[i]<='Z'){
            printf("%c",a[i]);
            break;
        }
    }
}