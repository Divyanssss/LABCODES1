#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main(){
    char a[100];
    int i,n=6,d=1,e,flag=0;
    fgets(a,100,stdin);
    int freq[128]={0};
    for(i=0;a[i]!='\0';i++){
        freq[a[i]]++;
    }
    for(i=0;a[i]!='\0';i++){
        if(freq[a[i]]==1){
            printf("%c",a[i]);
            break;
        }
    }
}