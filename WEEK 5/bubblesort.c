#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,d,e,f;
	n=5;
	int a[5]={1,3,4,5,6};
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			e=a[j];
			a[j]=a[j+1];
			a[j+1]=e;
		}
		}
		
		for(i=0;i<n;i++)
	printf("%d",a[i]);}
		}

		
	
