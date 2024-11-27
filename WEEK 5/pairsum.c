#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,d,e,flag=0;
	n=5;
	int a[5]={3,9,3,9,18};
	int f[5]={};
	for(i=0;i<n;i++){
	    if(flag==1) 
        break;
		for(j=i+1;j<n;j++){
			if((a[i]+a[j])%3!=0){
flag=1;
				break;
				
			}	
		}
		
		}
		if(flag==0){printf("true");}
        else printf("false");
		
		
	
	}

	
		

		
	
