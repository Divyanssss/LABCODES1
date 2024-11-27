#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,d,e;
	n=5;
	int f[5]={1,3,4,5,6};
	int a[6]={};
    for(j=0;j<n;j++){
		a[j]=f[j];
		
		
	
	
		
		}
        a[5]=7;
	for(i=0;i<6-1;i++){
		for(j=0;j<6-1;j++){
		if(a[j]>a[j+1]){
			e=a[j];
			a[j]=a[j+1];
			a[j+1]=e;
		}
		}
		
		for(i=0;i<6;i++)
	printf("%d",a[i]);}
		}

		
	
