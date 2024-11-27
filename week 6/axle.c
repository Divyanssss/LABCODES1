// A splitting machine is given a character array as an input , the splitting machine splits thecharacterarray in all possible methods to make individual strings
// Input :
// AXLE
// Output :
// A
// X
// L
// E
// AX
// XL
// LE
// AXL
// XLE
// AXLE

#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int i,j,n=6,d=1,e,flag=0;
   
	
    
	char a[6]="thiss";
    
	for(i=1;i<n;i++,flag++){

        for(j=0,flag=0;a[j+d-1]!='\0';j++){
            for(d=0;d<i;d++){
               
                printf("%c",a[d+j]);

            }
           printf("\n");
            
               

                

            
        }
       }

	   
	}

	
		

		
	
