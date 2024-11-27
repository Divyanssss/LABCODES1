#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int gcd(int a,int b){
    while(a!=b){
        if(a>b) a--; 
        else b--;
    }
    return a;
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
}
