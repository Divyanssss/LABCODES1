#include <stdio.h>
int main() {
    
    int n = 5;
    int i, j;
    
    for(i=0; i<n-1; i++) {
        for(j=0; j<i; j++) {
            printf(" ");
        }
        
        printf("*");
        
        int count = 2 * (n-i-1) - 1;
        
        for(j=1; j<=count; j++) {
            printf("_");
        }
        
        if(count != 0) printf("*");
        printf("\n");
    }
    
      
    for(j=0; j<n-1; j++) {
            printf(" ");
        } printf("*");

    return 0;
}
