#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,d,e;
	n=5;
	int a[5]={1,9,10,9,10};
	int f[5]={};
	for(i=0;i<n;i++){
	    int d = 1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				
				d++;
			}	
		}
		if(d>1){
			printf("%d repeates,first occurence at %dth ",a[i],i);
			printf("%d times\n",d);
		}
		
	
	}

	
		}

		
	