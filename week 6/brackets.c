#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(){
    char a[100];
    int i,j,n=6,d=1,e,flag=0;
    int ob=0,cb=0,curly=0,square=0,sign=0;
    fgets(a,100,stdin);
    
    for(i=0;a[i];i++){
        if(a[i]=='(') ob++;
        else if(a[i]==')')
        cb++;
        else if(a[i]=='{') 
        curly++;
        else if(a[i]=='}') 
        curly--;
        else if(a[i]=='[') 
        square++;
        else if(a[i]==']') 
        square--;
        else if(a[i]=='<') 
        sign++;
        else if(a[i]=='>') 
        sign--;
    }

    if(ob!=cb||curly!=0||square!=0||sign!=0)
        printf("Invalid");
    else
        printf("Valid");
    
    return 0;
}