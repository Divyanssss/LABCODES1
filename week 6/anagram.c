 #include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main(){
    char a[100],b[100];
    int i,n=6,d=1,e,flag=0;
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    int c[26]={0};
    for(i=0;a[i]!='\0';i++){
        c[a[i]-97]++;
        c[b[i]-97]--;
    }
    for(i=0;i<26;i++){
        if(c[i]!=0){
            printf("not anagram");
            return 0;
        }
    }
    printf("anagram");
}