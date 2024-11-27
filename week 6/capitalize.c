#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(){
	int i,j,n=6,d=1,e,flag=0;
   
	
    
	char a[6]="t his";
  
	for(i=0;i<n;i++,flag++){
        if(a[i]=' '&&(isalnum(a[i+1])))
        a[i+1]=a[i+1]-32;


       
       }
printf("%s",a);
	   
	}

	