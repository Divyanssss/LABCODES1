#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
struct s {
    unsigned int x:4;
    unsigned int y:4;
};
int main(){
    struct s i;
    i.x=10;
    i.y=5;
    printf("x=%d, y=%d",i.x,i.y);
}