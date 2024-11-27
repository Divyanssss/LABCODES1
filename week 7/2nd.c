#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,i,max,*a;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)if(a[i]>max)max=a[i];
    printf("Largest element: %d",max);
    free(a);}