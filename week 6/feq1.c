#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(){
	int i,j,n=6,d=1, e,flag=0,max,freq1=0,freq2=0;
   
	
    
	char a[6]="thhis";
    
  
	for(i=0;i<n;i++,freq1=0){
        for(j=0;j<n;j++){
        if(a[i]==a[j])
        freq1++;
        
        
        }
        if(freq1>=freq2){
            freq2=freq1;
            max=a[i];

        }
        


       
       }
printf("%c %d",max,freq2);
	   
	}

	