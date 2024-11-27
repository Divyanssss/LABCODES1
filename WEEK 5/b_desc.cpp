#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,d,e,f;
	n=5;
	int a[5]={1,8,4,9,10};
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			e=a[j];
			a[j]=a[j+1];
			a[j+1]=e;
		}
		}
		
	
	}
	//reverse of array

		for(j=0;j<n/2;j++){
	
			e=a[j];
			a[j]=a[n-j-1];
			a[n-j-1]=e;
		}
		
	
	for(i=0;i<n;i++)
	printf("%d,",a[i]);
	
		}

		
	
