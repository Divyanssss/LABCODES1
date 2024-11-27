#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
void avg(int *arr,int n) {
    int i,sum=0;
    for(i=0;i<n;i++)sum=sum+arr[i];
    printf("Average: %f",(float)sum/n);
}
int main(){
    int a[100],n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    avg(a,n);
}