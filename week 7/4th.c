#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int *a,*b,n1,n2,i;
  
    scanf("%d",&n1);
    a=(int*)malloc(n1*sizeof(int));
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);

    scanf("%d",&n2);
    b=(int*)malloc((n1+n2)*sizeof(int));
    for(i=0;i<n1;i++)
    b[i]=a[i];
    for(i=0;i<n2;i++)
    scanf("%d",&b[n1+i]);

    for(i=0;i<n1+n2;i++)
    
    printf("%d ",b[i]);
    free(a);
    free(b);
}