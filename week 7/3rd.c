#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
void reverse(char *p) {
    int a=strlen(p)-1;
    while(a>=0)
    printf("%c",p[a--]);
}
int main(){
    char a[100];
    printf("Enter string: ");
    fgets(a,100,stdin);
    reverse(a);
}