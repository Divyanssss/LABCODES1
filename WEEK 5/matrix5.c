#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,d,e,flag=0;
	n=9;
	int a[3][3]={1,0,0,0,1,0,0,0,1};
	int b[3][3]={2,3,4,5,1,6,8,7,9};
	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           if((j==i)&&a[i][j]==1){
            flag++;

           }
            if((j!=i)&&a[i][j]==0){
                flag++;
            }



        }
        


	
		}
        if(flag==9)printf("it is identity");
        else printf("it is not an identity");}

		
	
