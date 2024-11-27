#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,d,e,f=0;
	n=5;
	int a[5]={1,3,4,6,7};
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			e=a[j];                       
			a[j]=a[j+1];
			a[j+1]=e;
		}
		}}
		
		for(i=1;i<n+1;i++){
		
		if(a[i-1]==f+i){printf("");
		}
		else{
		
		printf("%d is missing \n",i);
		f++;}

	}}

		

		
	
