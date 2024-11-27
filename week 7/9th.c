#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct a{
    char c[20];
    struct b{
        int d;
        int e;
    }b1;
}a1;

int main() {
    
    scanf("%s",a1.c);
   
    scanf("%d%d",&a1.b1.d,&a1.b1.e);

    printf("%s",a1.c);
    printf("%d %d",a1.b1.d,a1.b1.d);
}
