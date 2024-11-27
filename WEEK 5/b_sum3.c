#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,d,e,k;
	n=5;
	int a[5]={1,9,10,9,10};
	int f[5]={};
	for(i=0;i<n;i++){
	    int d = 1;
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++){
			if((a[i]+a[j]+a[k])==20){
				
				printf("%d,%d,%d \n",a[i],a[j],a[k]);
			}}	
		}
		
		}
		
		
		
	
	}

	
		

		
	
