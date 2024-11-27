#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,d=0,e;
	n=5;
	int a[5]={1,9,4,9,10};
	int f[5]={};
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			e=a[j];
			a[j]=a[j+1];
			a[j+1]=e;
		}
		}
		
	
	}
for(j=0;j<n;j++){
		if(a[j]==a[j+1]){f[d]=a[j];
		d++;
		}
	
	
		
		}
	
	for(i=0;i<n;i++)
	printf("%d,",f[i]);
	
		}

		
	
